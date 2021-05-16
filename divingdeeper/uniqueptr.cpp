//smart pointers - unique_ptr
#include <memory>
#include <iostream>
#include <string>
#include <array>

using namespace std;

struct Employee {
    string name;
    int id;
    int salary;
};

int main()
{
    Employee olavo;
    Employee jose;
    Employee maria;

    olavo.name = "Olavo";
    olavo.id = 1;
    olavo.salary = 300000;

    jose.name = "José Mané";
    jose.id = 2;
    jose.salary = 100000;

    maria.name = "Maria S";
    maria.id = 3;
    maria.salary = 200000;

    array<Employee, 3> funcionarios = {olavo, jose, maria};

    auto anEmployee = make_unique<Employee>();

    for (Employee empCurrent : funcionarios) {
        *anEmployee = empCurrent;
        cout << "Nome: " << anEmployee->name << endl;
        cout << "ID: " << anEmployee->id << endl;
        cout << "Salário: " << anEmployee->salary << endl;
        cout << "-------------------------------" << endl;
    }







    
}
