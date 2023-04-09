#include "mathlib.h"
#include <iostream>

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
        //sumsq = lib_add(sumsq, lib_pow(number, 2));
        count ++;
    }

    double mean = lib_div(sum, count);
    var = sum_sq - lib_pow(mean, 2)*count;
    //var = lib_sub(sum_sq, lib_mul(lib_pow(mean, 2),count)); //To be reworked
    var = lib_div(var, count);
    SDeviation = lib_root(var, 2);
    cout << SDeviation << endl;

    return 0;
}
