#include <iostream>
#include<Person.h>
#include<Employee.h>
#include<Admin.h>
using namespace std;

Admin::Admin(int Id , string Name,string Password, double Salary): Employee(Id , Name , Password , Salary){
    this->Salary=Salary;
}

void Admin::setSalary(double Salary){
    if(Salary>=5000){
       this->Salary=Salary;
    }
    else{
        cout<< "invalid salary minimum salary is 5000.";
      return;
    }
}

double Admin::getSalary(){
    return Salary;
}

void Admin::print4(){
 cout << "Admin info:" << endl;
 cout << "ID:"<<getId()<<endl;
 cout << "Name:"<<getName()<<endl;
 cout << "Password:"<< getPassword()<< endl;
 cout << "Salary:"<< getSalary()<< endl;
}
