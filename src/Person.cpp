#include "Person.h"
#include <iostream>
using namespace std;

void Person::setId(int Id){
    this->Id = Id ;
}

void Person::setName(string Name){
    this->Name=Name ;
}

void Person::setPassword(string Password){
    this->Password=Password ;
}

int Person::getId(){
    return Id;
}

string Person::getname(){
    return Name ;
}

string Person::getPassword(){
    return Password ;
}

void Person::print(){
    cout<< "ID: " << Id << ", Name: " << Name << ", Password: "<< Password << endl;
}
