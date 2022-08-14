#include "../my_math.h"

long double my_sqrt(double x) {
  long double result = 0;
  if (x != x || x < 0.0) {
    result = my_NAN;
  } else {
    result = my_pow(x, 0.5);
  }
  return result;
}
