#include "Person.h"
#include<Validation.h>
#include <iostream>
using namespace std;

    Person::Person(int Id,string Name,string password){
       this->Id=Id;
       this->Name=Name;
       this->Password=password;
    }
    void Person::setId(int Id){
        this->Id =Id ;
    }

    void Person::setName(string Name) {
    if (Validation::validateName(Name)) {
        this->Name = Name;
    }
}
 void Person::setPassword(string Password){
  this ->Password=Password;
 }
    int Person::getId() { return Id; }

    string Person::getName() { return Name; }

    string Person::getPassword() { return Password; }


     void Person::print(){
        cout << "ID: " << Id<<endl;
        cout << " Name: " << Name<< endl;
        cout << " Password: "<< Password << endl;
    }

//void Person::print(){
//    cout<< "ID: " << Id << ", Name: " << Name << ", Password: "<< Password << endl;
//}
