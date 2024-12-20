#include "mathlib.h"

int factorial(int n) {
    if (n < 0) return -1;
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
