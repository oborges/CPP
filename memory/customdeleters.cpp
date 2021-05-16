#include <cstdlib>
#include <memory>

using namespace std;

//By default, unique_ptr uses the standard new and delete operations to allocate and deallocate memory. 
// You can manage this behavior as follows:

int* malloc_int(int value)
{
    int* p = (int*) malloc(sizeof(int));
    *p = value;
    return p;
}

int main()
{
    unique_ptr<int, decltype(free)*> myIntSmartPtr(malloc_int(42), free);
    /*
    This code allocates memory for an integer with malloc_int(). 
    The unique_ptr deallocates the memory by calling the standard free() function. 
    As said before, in C++ you should never use malloc(), but new instead. 
    However, this feature of unique_ptr is available because it is useful to manage other resources instead of just memory. 
    For example, it can be used to automatically close a file or network socket or 
    anything when the unique_ptr goes out of scope
    */
    return 0;        
}