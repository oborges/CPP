#pragma once
#include <iostream>
#include <vector>
#include "Employee.h"

namespace Records {


    const int kFirstEmployeeNumber = 1000;

    class Database
    {
        public:
            Employee& addEmployee(const std::string& firstName, const std::string& lastName);
            
            //duas versões: uma obtem uma referência para o Employee pelo número dele, outra pelo primeiro e ultimo nome
            Employee& getEmployee(int employeeNumber);
            Employee& getEmployee(const std::string& firstName, const std::string& lastName);

            //Because the database is the central repository for all employee records, it has methods that output all employees, 
            // the employees who are currently hired, and the employees who are no longer hired.
            void displayAll() const;
            void displayCurrent() const;
            void displayFormer() const;

        private:
            std::vector<Employee> mEmployees;
            int mNextEmployeeNumber = kFirstEmployeeNumber;
    };
    
}