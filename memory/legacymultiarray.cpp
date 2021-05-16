// t is recommended to avoid these old C-style arrays as much as possible because they do not provide any memory safety. 
//They are explained here because you will encounter them in legacy code

#include <iostream>
#include <stddef.h>


using namespace std;

int main()
{
    int xDimension = 10;
    int yDimension = 3;
    
    char **myArray = new char*[xDimension];  //Alocates first dimension
    for (size_t i = 0; i < xDimension; i++)
        myArray[i] = new char[yDimension]; //Alocates ith subarray

    //Do some work...

    //Now, let's release the memory
    for (size_t i = 0; i < xDimension; i++)
        delete[] myArray[i]; //Delete ith subarray
    
    delete[] myArray; //Delete first dimension
    myArray = nullptr;

    return 0;
}