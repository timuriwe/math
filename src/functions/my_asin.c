#include "../my_math.h"

long double my_asin(double x) {
  long double result = 0;
  if (x != x || my_fabs(x) > 1.0) {
    result = my_NAN;
  } else if (x == 1.0) {
    result = my_PI / 2;
  } else if (x == -1.0) {
    result = -my_PI / 2;
  } else {
    for (int n = 0; n < 11; n++) {
      result += (my_factorial(2 * n) * my_pow(x, (2 * n) + 1)) /
                (my_pow(4, n) * (2 * n + 1) * my_pow(my_factorial(n), 2));
    }
  }
  return result;
}
