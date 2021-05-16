#include <iostream>

int main()
{
    const char* str = R"(Is the following a tab character? \t)";
    std::cout << str;
    return 0;
}