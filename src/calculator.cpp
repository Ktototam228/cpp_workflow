#include "calculator.h"
#include <iostream>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
    return a / b;
}

int main() {
    std::cout << "Calculator demo:" << std::endl;
    std::cout << "10 + 5 = " << add(10, 5) << std::endl;
    std::cout << "10 - 5 = " << subtract(10, 5) << std::endl;
    std::cout << "10 * 5 = " << multiply(10, 5) << std::endl;
    std::cout << "10 / 5 = " << divide(10, 5) << std::endl;
    return 0;
}