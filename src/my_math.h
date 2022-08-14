#ifndef SRC_MY_MATH_H_  // SRC_MY_MATH_H_
#define SRC_MY_MATH_H_  // SRC_MY_MATH_H_

#include <stdio.h>

#define my_NAN 0.0 / 0.0
#define my_INFINITY 1.0 / 0.0
#define EPS 1E-12
#define my_PI 3.14159265358979323846
#define my_LN2 0.69314718056

int my_abs(int x);
long double my_acos(double x);
long double my_asin(double x);
long double my_atan(double x);
long double my_ceil(double x);
long double my_cos(double x);
long double my_exp(double x);
long double my_exp2(double x);
long double my_fabs(double x);
long double my_floor(double x);
long double my_fmod(double x, double y);
long double my_log(double x);
long double my_pow(double base, double exp);
long double my_sin(double x);
long double my_sqrt(double x);
long double my_tan(double x);
unsigned long long my_factorial(int x);

#endif  // SRC_MY_MATH_H_
