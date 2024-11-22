#include <iostream>
#include "Fact.h"

int main() {
    int a = 5;
    FactorialType result = factorial(a);

    std::cout << a << "!= " << result << std::endl;
    return 0;
}