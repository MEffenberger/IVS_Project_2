#include "mathlib.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<double>input_nums;
    double number;
    double sum = 0;
    double SDeviation;
    double var = 0;
    double step1;
    double step2;


    while(fscanf(stdin, "%lf", &number) == 1){
        sum = lib_add(sum, number);
        input_nums.push_back(number);
    }

    double mean = lib_div(sum, input_nums.size());

    for (int i = 0; i < input_nums.size(); i++){
        step1 = lib_sub(input_nums[i], mean);
        step2 = lib_pow(step1, 2);
        var += step2; //Can not use library function for now, since var exceeds max. supported number
    }

    var = lib_div(var, input_nums.size());
    SDeviation = lib_root(var, 2);
    cout << SDeviation << endl;

    return 0;
}
