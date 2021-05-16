//C-style multiple arguments
//should not be used in modern C++ implementations, 
//but you will find in legacy code

#include <cstdio>
#include <cstdarg>
#include <iostream>

void showSomething(int num, const char* str, ...)
{
    va_list argumentos;
    va_start(argumentos, str);
    
    for (size_t i = 0; i < num; ++i) {
        char* temp = va_arg(argumentos, char*);
        std::cout << temp;
    }

    
    va_end(argumentos);
}

int main()
{
    showSomething(6, "", "Olá", ", tudo ", "bem ", "com ", "você ", "?");
    return 0;
}