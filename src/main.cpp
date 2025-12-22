#include <iostream>
#include "../include/calculator.h"
using namespace std;

int main()
{
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