#include <iostream>
using namespace std;

int main() {
    int number;
    while(fscanf(stdin, "%d", &number) == 1){
        cout <<"Number:" << number << endl;
    }
    return 0;
}
