#include <iostream>

using namespace std;

int main()
{
    const char* myString = "Teste de string do Olavo";
    char charAtual = *(myString);
    int localSplit = 0;
    
    //encontrar o primeiro caracter "O" na string
    while(charAtual != '\0') {

        //se encontrou, para
        if (charAtual == 'O') break;
        localSplit++;
        charAtual = *(myString+localSplit);
    }
    

    //agora, vamos retornar a substring (igual python [localSplit::])
    cout << "Substring: " << myString+localSplit;

}