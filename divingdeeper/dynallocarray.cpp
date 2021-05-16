#include <iostream>

using namespace std;

int main()
{   
    int arraySize = 10;
    int *myDynamicArray = new int[arraySize]; // here, the pointer lives in the stack, the array in the heap
    for (int i = 0; i < arraySize; i++) {
        myDynamicArray[i] = i;
        cout << myDynamicArray[i] << endl;
    }
    
    delete[] myDynamicArray; //delete[] since it is an array
    myDynamicArray = nullptr; //best practice

        //note - avoid to use malloc and free from C. Instead, use new and delete, or new[] and delete[]
    
    return 0;
}