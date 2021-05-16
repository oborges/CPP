#include <iostream>
#include "Employee.h"

using namespace std;

namespace Records {
    Employee::Employee(const std::string& firstName, const std::string& lastName)
    : mFirstName(firstName), mLastName(lastName)
    {       
    }


    //firstName
    void Employee::setFirstName(const std::string& firstName)
    {
        mFirstName = firstName; 
    }
    
    const std::string& Employee::getFirstName() const
    {
        return mFirstName;    
    }

    //lastName
    void Employee::setLastName(const std::string& lastName)
    {
        mLastName = lastName;
    }
    
    const std::string& Employee::getLastName() const
    {
        return mLastName;    
    }

    //employee Number
    void Employee::setEmployeeNumber(int employeeNumber)
    {
        mEmployeeNumber = employeeNumber;
    }
    
    int Employee::getEmployeeNumber() const
    {
        return mEmployeeNumber;
    }

    //salary
    void Employee::setSalary(int newSalary)
    {
        mSalary = newSalary;
    }

    int Employee::getSalary() const
    {
        return mSalary;
    }

    //promote, demote
    void Employee::promote(int raiseAmount)
    {
        setSalary(getSalary() + raiseAmount);
    }

    void Employee::demote(int demeritAmount)
    {
        setSalary(getSalary() - demeritAmount);
    }

    //hire, fire, ishired
    void Employee::hire()
    {
        mHired = true;
    }

    void Employee::fire()
    {
        mHired = false;
    }

    bool Employee::isHired() const
    {
        return mHired;
    }

    //display
    void Employee::display() const
    {
        cout << "Employee: " << getLastName() << ", " << getFirstName() << endl;
        cout << "----------------------------------------" << endl;
        cout << (isHired() ? "Current Employee" : "Former Employee") << endl;
        cout << "Employee Number: " << getEmployeeNumber() << endl;
        cout << "Salary: $" << getSalary() << endl;
        cout << endl;
    }
}