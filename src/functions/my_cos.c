#include "../my_math.h"

long double my_cos(double x) {
  int sign = 1;
  x = my_fmod(x, 2 * my_PI);
  if (x > my_PI) {
    x -= my_PI;
    sign = -1;
  }
  long double result = 0;
  for (int i = 0; i < 9; i++) {
    result += my_pow(-1, i) * (my_pow(x, 2 * i) / my_factorial(2 * i));
  }
  return sign * result;
}
