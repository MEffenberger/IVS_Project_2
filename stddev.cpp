#include "mathlib.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<double>numbers;
    double number;
    double sum = 0;
    double SDeviation;
    double var = 0;
    double step1;
    double step2;


    while(fscanf(stdin, "%lf", &number) == 1){
        sum = lib_add(sum, number);
        numbers.push_back(number);
    }

    double mean = lib_div(sum, numbers.size());
    cout <<"Sum: " << sum << endl;
    cout <<"Count: " << numbers.size() << endl;
    cout <<"Mean:" << mean << endl;

    for (int i = 0; i < numbers.size(); i++){
        step1 = lib_sub(numbers[i], mean);
        step2 = lib_pow(step1, 2);
        var += step2; //Can not use library function for now, since var exceeds max. supported number
    }

    var = lib_div(var, numbers.size());
    SDeviation = lib_root(var, 2);
    cout <<"Standard deviation:" << SDeviation << endl;

    return 0;
}
