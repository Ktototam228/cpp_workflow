#include "calculator.h"
#include "logger.h"
#include <iostream>

double add(double a, double b) {
    Logger::log("add called with " + std::to_string(a) + ", " + std::to_string(b));
    return a + b;
}

double subtract(double a, double b) {
    Logger::log("subtract called with " + std::to_string(a) + ", " + std::to_string(b));
    return a - b;
}

double multiply(double a, double b) {
    Logger::log("multiply called with " + std::to_string(a) + ", " + std::to_string(b));
    return a * b;
}

double divide(double a, double b) {
    Logger::log("divide called with " + std::to_string(a) + ", " + std::to_string(b));
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        Logger::log("ERROR: Division by zero attempted");
        return 0;
    }
    return a / b;
}

int main() {
    std::cout << "Calculator demo with logging:" << std::endl;
    std::cout << "10 + 5 = " << add(10, 5) << std::endl;
    std::cout << "10 - 5 = " << subtract(10, 5) << std::endl;
    std::cout << "10 * 5 = " << multiply(10, 5) << std::endl;
    std::cout << "10 / 5 = " << divide(10, 5) << std::endl;
    std::cout << "Logs written to calculator.log" << std::endl;
    return 0;
}
