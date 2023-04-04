//
// Created by marek on 25.03.2023.
//

#include "mathlib.h"
#include <stdlib.h>
#include <vector>
#include <string>
#include <map>

//implementation of input parser based on the Shunting-yard algorithm
//https://en.wikipedia.org/wiki/Shunting-yard_algorithm

std::string arg_parser(std::string input_string) {

    std::vector<double> output_stack;
    std::vector<char> operator_stack;

    std::map<char, int> precedence {
            {'^', 4},
            {'!', 3},
            {'v', 3},
            {'*', 2},
            {'/', 2},
            {'%', 2},
            {'+', 1},
            {'-', 1},
    };

    for(long unsigned int i = 0; i < input_string.length(); i++) {
        if(input_string[i] == ' ') {
            continue;
        }
        if(input_string[i] == '(') {
            operator_stack.push_back(input_string[i]);
        }
        else if(input_string[i] == ')') {
            while(operator_stack.back() != '(') {
                output_stack.push_back(operator_stack.back());
                operator_stack.pop_back();
            }
            operator_stack.pop_back();
        }
        else if(input_string[i] == '+' || input_string[i] == '-' || input_string[i] == '*' || input_string[i] == '/' || input_string[i] == '%' || input_string[i] == '^' || input_string[i] == '!' || input_string[i] == 'v') {
            while(!operator_stack.empty() && operator_stack.back() != '(' && precedence[input_string[i]] <= precedence[operator_stack.back()]) {
                output_stack.push_back(operator_stack.back());
                operator_stack.pop_back();
            }
            operator_stack.push_back(input_string[i]);
        }
        else {
            std::string number;
            for(long unsigned int j = i; j < input_string.length() && ((input_string[j] >= '0' && input_string[j] <= '9') || input_string[j] == '.'); j++) {
                number += input_string[j];
                i++;
            }
            output_stack.push_back(std::stod(number));
        }
    }

    while(!operator_stack.empty()) {
        output_stack.push_back(operator_stack.back());
        operator_stack.pop_back();
    }

    std::vector<double> result_stack;

    for(long unsigned int i = 0; i < output_stack.size(); i++){
        if(output_stack[i] == '+') {
            double a = result_stack.back();
            result_stack.pop_back();
            double b = result_stack.back();
            result_stack.pop_back();
            result_stack.push_back(lib_add(a, b));
        }
        else if(output_stack[i] == '-') {
            double a = result_stack.back();
            result_stack.pop_back();
            double b = result_stack.back();
            result_stack.pop_back();
            result_stack.push_back(lib_sub(a, b));
        }
        else if(output_stack[i] == '*') {
            double a = result_stack.back();
            result_stack.pop_back();
            double b = result_stack.back();
            result_stack.pop_back();
            result_stack.push_back(lib_mul(a, b));
        }
        else if(output_stack[i] == '/') {
            double a = result_stack.back();
            result_stack.pop_back();
            double b = result_stack.back();
            result_stack.pop_back();
            result_stack.push_back(lib_div(a, b));
        }
        else if(output_stack[i] == '%') {
            double a = result_stack.back();
            result_stack.pop_back();
            double b = result_stack.back();
            result_stack.pop_back();
            result_stack.push_back(lib_mod(a, b));
        }
        else if(output_stack[i] == '^') {
            double a = result_stack.back();
            result_stack.pop_back();
            double b = result_stack.back();
            result_stack.pop_back();
            result_stack.push_back(lib_pow(a, b));
        }
        else if(output_stack[i] == '!') {
            double a = result_stack.back();
            result_stack.pop_back();
            result_stack.push_back(lib_fact(a));
        }
        else if(output_stack[i] == 'v') {
            double a = result_stack.back();
            result_stack.pop_back();
            double b = result_stack.back();
            result_stack.push_back(lib_root(a, b));
        }
        else {
            result_stack.push_back(output_stack[i]);
        }
    }

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