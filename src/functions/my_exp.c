#include "../my_math.h"

long double my_exp(double x) {
  long double expy = 1;
  if (x != x) {
    expy = my_NAN;
  } else if (x == my_INFINITY) {
    expy = my_INFINITY;
  } else if (x == -my_INFINITY) {
    expy = 0.0;
  } else {
    long double x_stage = x;
    for (int n = 1; my_fabs(x_stage) > EPS; n++) {
      if (n >= 2) {
        x_stage = x_stage * x;
      }
      x_stage = x_stage / n;
      expy += x_stage;
    }
  }
  return expy;
}
