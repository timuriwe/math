#include "../my_math.h"

long double my_floor(double x) {
  long double result = 0;
  if (x == my_INFINITY) {
    result = my_INFINITY;
  } else if (x == -my_INFINITY) {
    result = -my_INFINITY;
  } else if (x != x) {
    result = my_NAN;
  } else {
    result = (long double)(long int)x;
    if (x < EPS) {
      if (my_fabs((long double)(long int)x - x) > EPS) {
        result = (long double)(long int)(x - 1.0);
      }
    }
  }
  return result;
}
