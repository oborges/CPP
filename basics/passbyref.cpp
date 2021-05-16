#include <iostream>

using namespace std;

int swap(int& a, int& b)
{
    /*
    Rerences make your programs cleaner and easier to understand. 
    They are also safer than pointers: it’s impossible to have a null reference, 
    and you don’t explicitly dereference references, so you can’t encounter any of the 
    dereferencing errors associated with pointers.
    */
    int temp = a;
    a = b;
    b = temp;
    return 0;
}

int main()
{
    int x = 10;
    int y = 15;
    cout << "X = " << x <<  " Y = " << y << " before swap() " << endl;
    swap(x,y);
    cout << "X = " << x << " Y = " << y << " after swap() " << endl;
    return 0;    
}