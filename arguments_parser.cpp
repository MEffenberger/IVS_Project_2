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

void arg_parser(std::string input_string) {

    std::vector<double> output_stack;
    std::vector<char> operator_stack;

    std::map<char, int> precedence {
            {'^', 4},
            {'!', 3},
            {'√', 3},
            {'*', 2},
            {'/', 2},
            {'%', 2},
            {'+', 1},
            {'-', 1},
    };

    for(int i = 0; i < input_string.length(); i++) {
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
        else if(input_string[i] == '+' || input_string[i] == '-' || input_string[i] == '*' || input_string[i] == '/' || input_string[i] == '%' || input_string[i] == '^' || input_string[i] == '!' || input_string[i] == '√') {
            while(!operator_stack.empty() && operator_stack.back() != '(' && precedence[input_string[i]] <= precedence[operator_stack.back()]) {
                output_stack.push_back(operator_stack.back());
                operator_stack.pop_back();
            }
            operator_stack.push_back(input_string[i]);
        }
        else {
            std::string number;
            for(int j = i; j < input_string.length() && (input_string[j] >= '0' && input_string[j] <= '9' || input_string[j] == '.'); j++) {
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

    for(int i = 0; i < output_stack.size(); i++){

    }




}