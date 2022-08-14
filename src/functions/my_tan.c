#include "../my_math.h"

long double my_tan(double x) {
  x = my_fmod(x, 2 * my_PI);
  return my_sin(x) / my_cos(x);
}
