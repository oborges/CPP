//vector example
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> meuVetor = {1, 5, 10};
    meuVetor.push_back(33);
    meuVetor.push_back(44);

    cout << "1st element: " << meuVetor[0] << endl;
    cout << "Tamanho: " << meuVetor.size() << endl;
    return 0;
}