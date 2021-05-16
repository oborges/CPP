//lvalue rvalues example
#include <iostream>

using namespace std;

//lvalue reference parameter
void handleMessage(string& message)
{
    cout << "handleMessage with lvalue reference: " << message << endl;

}

//rvalue reference parameter
void handleMessage(string&& message)
{
    cout << "handleMessage with rvalue reference: " << message << endl;

}

int main()
{
    string a = "Hello";
    string b = "World";

    handleMessage(a);   //calls handleMessage(string& message)

    handleMessage(a+b); //calls handleMessage(streing&& message)

    //now, lets force the compiler to call the rvalue version with move()

    handleMessage(move(b));
    return 0;
}