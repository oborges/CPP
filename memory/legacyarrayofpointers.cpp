#include <stddef.h>
#include <iostream>

using namespace std;

class Simple
{
	public:
		Simple() { cout << "Simple constructor called!" << endl;}
		~Simple() { cout << "Simple destructor called!" << endl;}
};


int main(void)
{
    const size_t size = 4;
    Simple ** mySimplePtrArray = new Simple*[size];

    //Alocate an object for each pointer.
    for (size_t i =0; i < size; i++)
        mySimplePtrArray[i] = new Simple();
    
    //Use mySimplePtrArray....

    //Now, delete each allocated object.
    for (size_t i = 0; i < size; i++)
        delete mySimplePtrArray[i];
    
    //Delete the array itSelf
    delete[] mySimplePtrArray;
    mySimplePtrArray = nullptr;

    return 0;
}