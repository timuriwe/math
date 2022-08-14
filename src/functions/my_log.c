#include "../my_math.h"

long double log_taylor_series(double x) {
    x = x - 1;
    int sig = 1;
    int n = 1;
    long double summ = 0;
    long double powx = x;
    long double add = x;

    while (my_fabs(add) > EPS) {
        summ += add;
        sig = -sig;
        powx = powx * x;
        n++;
        add = sig * powx / n;
    }
    
    return summ;
}

long double my_log(double x) {
    long double res = 0.0;
    if (x != x) {
        res = my_NAN;
    } else if (x < 0) {
        res = -my_NAN;
    } else if (x == 0.0) {
        res = -my_INFINITY;
    } else if (x == my_INFINITY) {
        res = my_INFINITY;
    } else if (x == -my_INFINITY) {
        res = my_NAN;
    } else if (x == 2) {
      res = my_LN2;
    } else if (x > 2) {
        int n = 0;
        while (x > 1) {
            x /= 10;
            n++;
        }
        res = n * 2.30258509299 + log_taylor_series(x);
    } else {
        res = log_taylor_series(x);
    }
    return res;
}
