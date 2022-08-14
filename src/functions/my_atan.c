#include "../my_math.h"

long double my_atan(double x) {
  long double result = 0;
  int sign = 1;
  if (x < 0.0) {
    sign = -1;
    x = -x;
  }
  if (x > 1.0) {
    result = my_PI / 2 - my_atan(1.0 / x);
  } else if (my_fabs(x - 1.0) < 0.000001) {
    result = my_PI / 4;
  } else {
    for (int n = 0; n < 20; n++) {
      result += (my_pow(-1, n) * my_pow(x, (2 * n) + 1)) / (2 * n + 1);
    }
  }
  return sign * result;
}
