#include <iostream>

using namespace std;

class Simple
{
	public:
		Simple() = default;
        Simple(const Simple& src) = delete;
		~Simple() { cout << "Simple destructor called!" << endl;}
        int valor = 0;

};

int main(void)
{
    Simple meuObj;
    cout << "Lets try to pass the object by value..." << meuObj.valor << endl;
    return 0;
}

