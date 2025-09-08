#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED
#include<Person.h>
#include<Employee.h>

class Admin : public Employee{

private:
    double Salary;

public:
    Admin(int Id , string Name , string Password , double Salary);
    void print();

};


#endif // ADMIN_H_INCLUDED
