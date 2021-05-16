#include <string>
#include <iostream>

using namespace std;

int main()
{
    string myString = "hello";
    myString += ", there";
    string myOtherString = myString;
    if (myString == myOtherString) {
        myOtherString[0] = 'H';
    }

    cout << myString << endl;
    cout << myOtherString << endl;
    
    //string literals
    auto string1 = "Hello World"; //string1 is a const char*
    auto string2 = "Hello World"s; //string2 is an std::string
    
    return 0;
}