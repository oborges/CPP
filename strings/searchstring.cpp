//escreva uma função que busque, em uma lista de strings existentes, todas aquelas que terminam com a string fornecida
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int buscar(const string_view& padrao, vector<string_view>& lista)
{
    int found = 0; //how many times I found the pattern
    int tamanhoStringAtual, tamanhoStringPadrao = 0;
    tamanhoStringPadrao = padrao.size();

    for (string_view stringAtual: lista) {
        
        tamanhoStringAtual = stringAtual.size();
        
        if (tamanhoStringPadrao > tamanhoStringAtual) continue;

        string_view sliceString = stringAtual.substr(tamanhoStringAtual - tamanhoStringPadrao);

        if (sliceString == padrao)
            found++;
    }

    return found;
}

int main()
{
    vector<string_view> lista = {"", "o", "olavo", "ovo", "avo", "lavi", "lavo", "ola", "vo"};

    cout << "Quantidade encontrada: " << buscar("vo", lista) << endl;
    return 0;

}