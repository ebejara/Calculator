#include <iostream>
#include <spdlog/spdlog.h>
#include "../include/calculator.h"
using namespace std;

int main()
{
    spdlog::set_level(spdlog::level::debug);  // Show debug and above; change to info for production
    spdlog::set_pattern("[%Y-%m-%d %H:%M:%S] [%l] %v");  // Custom format: timestamp, level, message

    spdlog::info("Calculator started");

    int a = 4;
    int b = 5;

    Calculator calc;
    std::cout << "Hello World!\n";
    std::cout << a << " + " << b << " = " << calc.add(a, b) << '\n';
    std::cout << a << " - " << b << " = " << calc.subtract(a, b) << '\n';
    std::cout << a << " * " << b << " = " << calc.multiply(a, b) << '\n';
    std::cout << a << " / " << b << " = " << calc.divide(a, b) << '\n';
    std::cout << "Program over!\n";
    return 0;
}