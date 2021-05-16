#include <iostream>

using namespace std;


void addOneValue(int i)
{
    i++;
}

void addOneRef(int& i)
{
    i++;
}

int main()
{
    int meuNumero = 10;
    int& shadow = meuNumero; //shadow references meuNumero
    shadow = 5;
    cout << "Valor de meuNumero: " << meuNumero << endl;
    addOneValue(meuNumero);
    cout << "Valor de meuNumero apos addOneValue(): " << meuNumero << endl;
    addOneRef(meuNumero);
    cout << "Valor de meuNumero apos addOneRef(): " << meuNumero << endl;
   
    return 0;
}