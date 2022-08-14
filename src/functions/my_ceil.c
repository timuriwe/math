#include "../my_math.h"

long double my_ceil(double x) {
  long double result = 0;
  if (x == my_INFINITY) {
    result = my_INFINITY;
  } else if (x == -my_INFINITY) {
    result = -my_INFINITY;
  } else if (x != x) {
    result = my_NAN;
  } else {
    if (my_fabs((int)x - x) < 0.00000001) {
      result = x;
    } else {
      result = my_floor(x) + 1;
    }
  }
  return result;
}
