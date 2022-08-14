#include "../my_math.h"

int my_abs(int x) {
  int result = x;
  if (x < 0) {
    result = -result;
  }
  return result;
}
