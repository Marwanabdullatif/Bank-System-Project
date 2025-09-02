#include "Admin.h"
#include<iostream>

Admin::Admin(int Id,string Name,string Password,double Salary):Employee(Id,Name,Password,Salary){
}
void Admin::print4(){
 cout <<endl<< "Admin info:" << endl;
 cout << "ID:"<<getId()<<endl;
 cout << "Name:"<<getName()<<endl;
 cout << "Password:"<< getPassword()<< endl;
 cout << "Salary:"<< getSalary()<< endl;


}
