#include "../my_math.h"

long double my_fmod(double x, double y) {
  long double result = 0;
  if (y == my_INFINITY || y == -my_INFINITY) {
    result = x;
  } else if (y == 0 || y != y || x != x ||
             x == my_INFINITY || x == -my_INFINITY) {
    result = my_NAN;
  } else {
    result = x - (int)(x / y) * y;
  }
  return result;
}
