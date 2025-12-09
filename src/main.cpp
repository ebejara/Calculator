#include <iostream>
#include "../include/calculator.h"
using namespace std;

int main()
{
    int a = 4;
    int b = 5;
    calculator calc;

    std::cout << "Hello World!\n";
    std::cout << a << " + " << b << " = " << calc.add(a, b) << '\n';
    std::cout << a << " - " << b << " = " << calc.sub(a, b) << '\n';
    std::cout << a << " * " << b << " = " << calc.mult(a, b) << '\n';
    std::cout << a << " / " << b << " = " << calc.div(a, b) << '\n';

    return 0;
}