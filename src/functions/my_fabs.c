#include "../my_math.h"

long double my_fabs(double x) {
  long double result = x;
  if (x < 0) {
    result = -result;
  }
  return result;
}
