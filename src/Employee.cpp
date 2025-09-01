#include "Employee.h"
#include <iostream>

Employee::Employee(int Id,string Name,string Password,double salary):Person(Id,Name,Password){
this->Salary=salary;
}
void Employee::setSalary(double Salary){
   if(Salary>=5000){
   this->Salary=Salary;
   }
   else{
    cout<< "invalid salary minimum salary is 5000.";
      return;
   }
}
double Employee::getSalary(){
    return Salary;
}
void Employee::print3(){
 cout << "ID:"<<getId()<<endl;
 cout << "Name:"<<getName()<<endl;
 cout << "password;"<< getPassword()<< endl;
 cout << "salary:"<< getSalary()<< endl;
}


