#include "mathlib.cpp"
#include <iostream>

using namespace std;

int main() {

    int number;
    double sum = 0;
    double count = 0;


    while(fscanf(stdin, "%d", &number) == 1){
        //cout <<"Number:" << number << endl;
        sum = lib_add(sum, number);
        count = lib_add(count, 1);
    }

    double result = lib_div(sum, count);
    cout <<"Sum: " << sum << endl;
    cout <<"Count: " << count << endl;
    return 0;
}
