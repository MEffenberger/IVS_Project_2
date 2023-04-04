#include "mathlib.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {

    double number;
    double sum = 0;
    double sum_sq = 0;
    double SDeviation;
    double var = 0;
    double count = 0;


    while(fscanf(stdin, "%lf", &number) == 1){
        sum = lib_add(sum, number);
        sum_sq += lib_pow(number, 2); //Can not use library function for now, since sum_sq does exceed max. supported number
        count ++;
    }

    double mean = lib_div(sum, count);
    var = lib_sub(lib_div(sum_sq, count), lib_pow(mean, 2));
    SDeviation = lib_root(var, 2);
    cout << SDeviation << endl;

    return 0;
}
