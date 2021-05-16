#include <iostream>

using namespace std;

class Simple
{
	public:
		Simple() { cout << "Simple constructor called!" << endl;}
        Simple(int valor) { mPrivateData = valor;}
		~Simple() { cout << "Simple destructor called!" << endl;}
        friend void obterData(Simple& obj);
    private:
        int mPrivateData = 0;
};

void obterData(Simple& obj) 
{
    obj.mPrivateData = 10;
    cout << "Consigo acessar e alterar mPrivateData, pois sou Friend! O valor é " << obj.mPrivateData << endl;
}

int main()
{
    Simple mySimple(5);
    obterData(mySimple);
    return 0;
}