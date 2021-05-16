//Example of initializer lists

#include <iostream>
#include <initializer_list>

using namespace std;

int makeSum(initializer_list<int> lst)
{
    int total = 0;
    for (int value: lst) {
        total += value;
    }
    return total;
}
int main()
{
    cout << "Soma: " << makeSum({10,20,30,40,50}) << endl;
    cout << "Soma 2: " << makeSum({1,2,3}) << endl;
    return 0; 
}