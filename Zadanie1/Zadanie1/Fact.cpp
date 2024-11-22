#include "Fact.h"

FactorialType factorial(int n) {
    FactorialType result = 1;

    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}