//delegated constructor example
#include <iostream>

using namespace std;

class MyClass {
    public:
        MyClass() = default;

        MyClass(int valor)
        {
            cout << "Estou no construtor int. Valor recebido: " << valor << endl;
            //dosomething...
        }
        MyClass(double valor) : MyClass( (int) valor)
        {
            cout << "Continuando..." << endl;
            cout << "Estou no construtor Double. Valor recebido: " << valor << endl;

        }
};

int main()
{
    MyClass c(10.50);
    return 0;
}