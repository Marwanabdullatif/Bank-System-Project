#include <iostream>
#include<Person.h>
#include<Employee.h>
#include<Admin.h>
using namespace std;

Admin::Admin(int Id , string Name,string Password, double Salary): Employee(Id , Name , Password , Salary){
}

void Admin::print(){
 cout << "Admin info:" << endl;
 cout << "ID:"<<getId()<<endl;
 cout << "Name:"<<getName()<<endl;
 cout << "Password:"<< getPassword()<< endl;
 cout << "Salary:"<< getSalary()<< endl;
}
