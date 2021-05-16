#include <iostream>
#include <stdexcept>

using namespace std;

double divideNumbers(const double& numerator, const double& denominator)
{

    try {
        
        if (denominator == 0) {
            throw invalid_argument("Denominador não pode ser zero");
        }
        return numerator / denominator;
    }
    catch (const invalid_argument& exception) {
        cout << "Exception caught: " << exception.what() << endl;
        return 0;
    }
}

int main()
{
    double numerador, denominador;

    cout << "Numerador: ";
    cin >> numerador;
    cout << "Denominador: ";
    cin >> denominador;
    cout << "Divisão: " << divideNumbers(numerador, denominador) << endl;
    

}