#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED
#include<Employee.h>

class Admin:public Employee{
private:
    double Salary;
 public:
     Admin(int Id,string Name,string Password,double Salary);
     void print4();

};

#endif // ADMIN_H_INCLUDED
