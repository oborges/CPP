#include <iostream>

using namespace std;

class Simple
{
	public:
		Simple() = default;
        Simple(const Simple& src) = delete;
		~Simple() { cout << "Simple destructor called!" << endl;}
        int valor;

};

int valor(Simple copy)
{
    return copy.valor;
}

int main(void)
{
    Simple meuObj;
    meuObj.valor = 10;
    cout << "Lets try to pass the object by value..." << valor(meuObj) << endl; //the compiler should complain since it can't be copied
    return 0;
}

