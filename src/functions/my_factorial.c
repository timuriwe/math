#include "../my_math.h"

unsigned long long my_factorial(int n) {
  unsigned long long result;
  if (n < 1) {
    result = 1;
  } else {
    result = n * my_factorial(n - 1);
  }
  return result;
}
