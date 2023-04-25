/********************************************************
 *  Název projektu: Kalkulačka
 *  Soubor: arguments_parser.cpp
 *  Datum: 23.4.2023
 *  Autor: Rogalo
 *  Popis: Parser kalkulačky
*********************************************************/

/**
 * @file arguments_parser.cpp
 * @brief Parser kalkulačky
 * @author Rogalo
 */

#include "arguments_parser.h"

/**
 * @brief Zpracování vstupního řetězce s následným výpočtem na základě Shunting-yard algoritmu
 * @see https://en.wikipedia.org/wiki/Shunting-yard_algorithm
 * @bug Chybné zpracování vstupního řetězce s lichým počtem a více než třemi mínusy za sebou, např. 3---1
 * @param input_string Vstupní řetězec
 * @return Výsledný řetězec ve validním formátu
 */
std::string arg_parser(std::string input_string) {


    // Zjištění, zda je na systému desetinný oddělovač čárka nebo tečka
    bool localization_comma = false;
    lconv* locale_info = localeconv();
    char decimal_point = (locale_info->decimal_point[0] == '.') ? '.' : ',';
    if (decimal_point == ',') {
    localization_comma = true;
    }

    // Error handling - poslední znak nesmí být operátor
    if(input_string.back() == '^' || input_string.back() == 'v' ||
       input_string.back() == '*' || input_string.back() == '/' ||
       input_string.back() == '%' || input_string.back() == '+' ||
       input_string.back() == '-' || input_string.back() == '('){
        throw std::runtime_error("Check last char!");
    }

    // Error handling - poslední znak nesmí být operátor
    if(input_string.front() == '^' || input_string.front() == 'v' ||
       input_string.front() == '*' || input_string.front() == '/' ||
       input_string.front() == '%' || input_string.front() == '!' ||
       input_string.front() == ')'){
        throw std::runtime_error("Check first char!");
    }

    int ent_par = 0;
    int close_par = 0;

    for (char ch : input_string)
    {
        if (ch == '(') {
            ent_par++;
        } else if (ch == ')') {
            close_par++;
        }
    }
    // Error handling - kontrola závorek, počet otevřených musí být stejný jako počet uzavřených
    if (ent_par != close_par) throw std::runtime_error("Check the ')','('!");

    // Pomocné vektory pro zpracování vstupu
    std::vector<std::string> output_stack;
    std::vector<double> result_stack;
    std::vector<char> operator_stack;

    // Precedenční tabulka pro operátory a závorky, '_' je placeholder pro unární operátor, 'v' je placeholder pro root
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

    // Potřebný flag pro zpracování unárních operátorů
    bool last_was_operator = true;

    // Potřebný flag pro zpracování faktoriálu pro zachování správné precedence při výrazu <num>!-<num>
    bool last_was_factorial = false;


    for (long unsigned int i = 0; i < input_string.length(); i++)
    {
        char c = input_string[i];

        if (isdigit(c) || c == '.')
        {
            // zpracování číselného vstupu
            std::string number_str;
            while (i < input_string.length() && (isdigit(input_string[i]) || input_string[i] == '.'))
            {
                number_str += input_string[i];
                i++;
            }
            i--;  // posunutí indexu o jeden znak zpět pro zpracování posledního čísla

            // ošetření krajních vstupů typu "2..2"
            int periodCount = std::count(number_str.begin(), number_str.end(), '.');
            if (periodCount > 1) throw std::runtime_error(ERROR_OTHER);

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
            // Ignorování případu, kdy je za sebou více operátorů (např. "2++2" + podpora pro faktorial
            if (c == '+' && last_was_operator && !last_was_factorial) continue;

            // Podmínka pro zpracování unárního mínus
            if ((last_was_operator && !last_was_factorial && c == '-') || (c == '-' && (i == 0 || input_string[i-1] == '(')))
            {
                c = '_';
            }

            // Podmínky pro správné zpracování operátorů na základě precedence
            while (!operator_stack.empty() && precedence[operator_stack.back()] >= precedence[c])
            {
                output_stack.push_back(std::string(1, operator_stack.back()));
                operator_stack.pop_back();
            }

            if(last_was_operator && c != '_' && !last_was_factorial) throw std::runtime_error(ERROR_OTHER);  // Ošetření chybového vstupu typu "2**2"
            if(c == '!' && last_was_factorial) throw std::runtime_error(ERROR_OTHER);                       // Ošetření chybového vstupu typu "2!!2"

            c == '!' ? last_was_factorial = true : last_was_factorial = false;              // Podmínka pro zpracování faktoriálu
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

    // Převod zpracovaného výrazu na reverzní polskou notaci
    while (!operator_stack.empty())
    {
        output_stack.push_back(std::string(1, operator_stack.back()));
        operator_stack.pop_back();
    }

    ///////////////////////////////////////////////////
    //** výpočet výsledku z reverzní polské notace **//
    ///////////////////////////////////////////////////

    for (auto& token : output_stack)
    {
        if (isdigit(token[0]) || token[0] == '.')
        {
            // Převod desetinné čárky na desetinnou tečku, možné ošetření konverze kvůli lokalizaci uživatelova systému
            if (localization_comma) std::replace(token.begin(), token.end(), '.', ',');

            result_stack.push_back(std::stod(token));
        } else
        {
            if (token[0] == '_') {                  // Nutný převod unárního mínus na nový symbol pro správné zpracování
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
                if (op2 < 0) throw std::runtime_error("Negative Fact!");                    // Ošetření chybového vstupu typu "-2!"
                if (op2 > FACTORIAL_MAX) throw std::overflow_error(ERROR_OUT_OF_RANGE);     // Zamezení přetečení datového typu
                result_stack.pop_back();
                result_stack.push_back(lib_fact(op2));
            } else
            {
                throw std::runtime_error(ERROR_OTHER);
            }
        }
    }

    ////////////////////////////////////////////////////////////////////////////////////////
    /// ** Změna zpracování výsledku pomocí knihovny, lepší zobrazování krajních hodnot **//
    ////////////////////////////////////////////////////////////////////////////////////////

    // Získání výsledku z vrcholu zásobníku
    double result = result_stack.back();

    // Nutný flag pro správné zpracování výsledku v exponenciální notaci končícího nulou
    bool scientific = false;

    std::stringstream stream;
    std::string formattedResult;

    // Zpracování výsledku do formátu pro výpis, založeno velikosti displeje kalkulačky
    if (std::abs(result) > 999999999999.0 || (std::abs(result) > 0.0 && std::abs(result) < 0.0001))
    {
        stream << std::scientific << std::setprecision(5) << result;
        scientific = true;
    } else
    {
        stream << std::fixed << std::setprecision(7) << result;
    }

    formattedResult = stream.str();

    if (formattedResult.length() > 12)
    {
        formattedResult = formattedResult.substr(0, 12);
    }

    // Odstranění nul na konci
    while (formattedResult.back() == '0')
    {
        if(scientific) break;
        formattedResult.pop_back();
    }

    // Při celočíselném výsledku odstranění desetinné tečky
    if (formattedResult.back() == '.')
    {
        formattedResult.pop_back();
    }

    // Návrat výsledku ve správném formátu
    return formattedResult;
}

/** Konec souboru arguments_parser.cpp */