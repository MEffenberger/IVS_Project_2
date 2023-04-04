#ifndef MATHLIB_H
#define MATHLIB_H

#include <stdlib.h>
#include <stdexcept>
#include <math.h>


double lib_add (double num1, double num2);
double lib_sub (double num1, double num2);

double lib_mul (double num1, double num2);
double lib_div (double num1, double num2);

double lib_fact (double num);
double lib_pow (double num, double exp);
double lib_root (double num, double root);

double lib_mod (double num1, double num2);

#endif
