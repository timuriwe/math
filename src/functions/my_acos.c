#include "../my_math.h"

long double my_acos(double x) {
  return my_PI/2.0 - my_asin(x);
}
