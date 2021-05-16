#include <iostream>

int main(void) 
{
    int* myIntPointer;
    myIntPointer = nullptr;
    myIntPointer = new int;
    *myIntPointer = 8;

    std::cout << "myIntPointer value: " << *myIntPointer << std::endl;
    
    //free space from the heap
    delete myIntPointer;
    myIntPointer = nullptr; //best practice
    
    //now lets reference a variable in the stack

    int i = 10;
    int* myNewPointer = &i; //myNewPoint references i

    std::cout << "i value: " << *myNewPointer << std::endl;
    myNewPointer = nullptr; //you don't delete it since no new memory was allocated for it

    return 0;

}