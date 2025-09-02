#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED
#include<Person.h>
#include<Employee.h>

class Admin : public Employee{

private:
    double Salary;

public:
    Admin();
    Admin(int Id , string Name , string Password , double Salary);
    void setSalary(double Salary);
    double getSalary();
    void print4();

};


#endif // ADMIN_H_INCLUDED
