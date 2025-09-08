#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<Person.h>
class Employee: public Person
{
private:
    double Salary;

    public:
        Employee(int Id,string Name ,string Password,double Salary);
        void setSalary(double Salary);
        double getSalary();
        void print();
};

#endif // EMPLOYEE_H
