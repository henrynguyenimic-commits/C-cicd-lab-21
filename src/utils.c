#include "utils.h"

unsigned long long factorial(int n) {
    if (n < 0) return 0;
    if (n == 0 || n == 1) return 1;
    return (unsigned long long)n * factorial(n - 1);
}
