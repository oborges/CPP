#include <iostream>
#include <string>

void printString(const std::string& myString) 
{
    std::cout << myString << std::endl;
}

int main()
{
    std::string someString = "Hello world!";
    printString(someString);
    printString("Hello again!"); //literal works
    return 0;
}