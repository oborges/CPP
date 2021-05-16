#include <iostream>
//function return c++14 feature - ask the compiler to figure out the return type
auto addNumbers(int number1, int number2)
{
    std::cout << "Entering function " << __func__ << std::endl;
    return number1 + number2;
}

int main() 
{
    std::cout << "Resultado: " << addNumbers(1, 5) << std::endl; //__func__ = function name, commonly used to debug
    return 0;
}
