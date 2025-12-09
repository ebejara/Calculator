

#pragma once
#include <stdexcept>
class calculator{
    public:
    
    calculator(){
    }
    int add(int a, int b)
    {
        return a +b;
    }
    int sub(int a, int b)
    {
        return a - b;
    }

    int div(int a, int b)
    {
        if (b == 0) {
        throw std::invalid_argument("Division by zero");
        // or return some sentinel value like INT_MIN
    }
        return a/b;
    }

    int mult(int a, int b){
        return a*b;
    }
};