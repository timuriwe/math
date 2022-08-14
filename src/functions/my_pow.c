#include "../my_math.h"

long double my_pow(double base, double exp) {
  long double result = 1;
  if (base != base || exp != exp) {
    result = my_NAN;
  } else if (exp == my_INFINITY) {
    result = my_fabs(base) < 1.0 ? 0.0 : my_INFINITY;
  } else if (exp == -my_INFINITY) {
    result = my_fabs(base) < 1.0 ? my_INFINITY : 0.0;
  } else if (my_fabs((int)exp - exp) > EPS) {
    result = my_exp(exp * my_log(base));
  } else {
    if (exp < 0.0) {
      exp = -exp;
      result = 1 / my_pow(base, exp);
    } else {
      for (int i = 0; i < (int)exp; i++) {
        result *= base;
      }
    }
  }
  return result;
}
