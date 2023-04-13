#include "mathlib.h"
#include <stdlib.h>
#include <vector>
#include <string>
#include <map>




/**
 * @brief Zpracování vstupního řetězce s následným výpočtem na základě Shunting-yard algoritmu
 * @see https://en.wikipedia.org/wiki/Shunting-yard_algorithm
 * @param input_string vstupní řetězec
 * @return výsledný řetězec
 */
std::string arg_parser(std::string input_string) {

    // pomocné vektory pro zpracování vstupu
    std::vector<std::string> output_stack;
    std::vector<double> result_stack;
    std::vector<char> operator_stack;

    // precedenční tabulka pro operátory a závorky, '_' je placeholder pro unární operátor, 'v' je placeholder pro root
    std::map<char, int> precedence
    {
            {'^', 4},
            {'!', 5},
            {'v', 3},
            {'*', 2},
            {'/', 2},
            {'%', 2},
            {'+', 1},
            {'-', 1},
            {'(', 0},
            {')', 0},
            {'_', 6}
    };

    // potřebný flag pro zpracování unárních operátorů
    bool last_was_operator = true;
    // potřebný flag pro zpracování faktoriálu pro zachování správné precedence při výrazu <num>!-<num>
    bool last_was_factorial = false;

    for (long unsigned int i = 0; i < input_string.length(); i++)
    {
        char c = input_string[i];

        if (isdigit(c) || c == '.')
        {
            if (last_was_operator && c == '.')    // možnost zadání desetinné čárky jako prvního znaku (např. ".2")
            {
                output_stack.push_back("0");
            }

            std::string number_str;
            while (i < input_string.length() && (isdigit(input_string[i]) || input_string[i] == '.'))
            {
                number_str += input_string[i];
                i++;
            }

            i--;  // posunutí indexu o jeden znak zpět pro zpracování posledního čísla

            output_stack.push_back(number_str);
            last_was_operator = false;
        }
        else if (c == '(')
        {
            operator_stack.push_back(c);
            last_was_operator = true;
        }
        else if (c == ')')
        {
            while (operator_stack.back() != '(')
            {
                output_stack.push_back(std::string(1, operator_stack.back()));
                operator_stack.pop_back();
            }
            operator_stack.pop_back();
            last_was_operator = false;
        }

        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '^' || c == 'v' || c == '!')
        {
            // podmínka pro zpracování unárních operátorů
            if ((last_was_operator && !last_was_factorial && c == '-') || (c == '-' && (i == 0 || input_string[i-1] == '(')))
            {
                c = '_';
            }
            // podmínka pro zpracování faktoriálu
            c == '!' ? last_was_factorial = true : last_was_factorial = false;

            // podmínky pro správné zpracování operátorů na základě precedence
            while (!operator_stack.empty() && precedence[operator_stack.back()] >= precedence[c])
            {
                output_stack.push_back(std::string(1, operator_stack.back()));
                operator_stack.pop_back();
            }

            operator_stack.push_back(c);
            last_was_operator = true;
        }
        else if (c == ' '){
            continue;
        }
        else {
            throw std::runtime_error(ERROR_OTHER);
        }
    }

    // převod zpracovaného výrazu na reverse polish notation
    while (!operator_stack.empty()) {
        output_stack.push_back(std::string(1, operator_stack.back()));
        operator_stack.pop_back();
    }

    // výpočet výsledku
    for (auto& token : output_stack) 
        {
        if (isdigit(token[0]) || token[0] == '.') 
        {
            result_stack.push_back(std::stod(token));
        } else 
            {
            if (token[0] == '_') {                  // nutný převod unárního mínus na nový symbol
                double op2 = result_stack.back();
                result_stack.pop_back();
                result_stack.push_back(-op2);
            }else if (token[0] == '+') {
                double op2 = result_stack.back();
                result_stack.pop_back();
                double op1 = result_stack.back();
                result_stack.pop_back();
                result_stack.push_back(lib_add(op1, op2));
            } else if (token[0] == '-') {
                double op2 = result_stack.back();
                result_stack.pop_back();
                double op1 = result_stack.back();
                result_stack.pop_back();
                result_stack.push_back(lib_sub(op1, op2));
            } else if (token[0] == '*') {
                double op2 = result_stack.back();
                result_stack.pop_back();
                double op1 = result_stack.back();
                result_stack.pop_back();
                result_stack.push_back(lib_mul(op1, op2));
            } else if (token[0] == '/') {
                double op2 = result_stack.back();
                result_stack.pop_back();
                double op1 = result_stack.back();
                result_stack.pop_back();
                result_stack.push_back(lib_div(op1, op2));
            } else if (token[0] == '%') {
                double op2 = result_stack.back();
                result_stack.pop_back();
                double op1 = result_stack.back();
                result_stack.pop_back();
                result_stack.push_back(lib_mod(op1, op2));
            } else if (token[0] == '^') {
                double op2 = result_stack.back();
                result_stack.pop_back();
                double op1 = result_stack.back();
                result_stack.pop_back();
                result_stack.push_back(lib_pow(op1, op2));
            } else if (token[0] == 'v') {
                double op2 = result_stack.back();
                result_stack.pop_back();
                double op1 = result_stack.back();
                result_stack.pop_back();
                result_stack.push_back(lib_root(op2, op1));
            } else if (token[0] == '!') {
                double op2 = result_stack.back();
                result_stack.pop_back();
                result_stack.push_back(lib_fact(op2));
            } else 
            {
                throw std::runtime_error(ERROR_OTHER);
            }
        }
    }

    // zaokrouhlení výsledku, předmět změny
    double exponent = std::floor(std::log10(std::abs(result_stack.back()))) + 1;
    double precision = 10;
    double rounded = std::round(result_stack.back() / std::pow(10, exponent - precision)) * std::pow(10, exponent - precision);
    std::string result = std::to_string(rounded);

        if (exponent > precision) {
            result += "e+" + std::to_string(static_cast<int>(exponent) - precision);
        } else if (exponent < 0) {
            result += "e-" + std::to_string(static_cast<int>(std::abs(exponent)));
        }

    return result;
    
}
