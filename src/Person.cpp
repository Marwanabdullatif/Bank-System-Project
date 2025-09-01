#include "Person.h"
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

void Person::setName(string Name){
    if (Name.size() < 3 || Name.size() > 20) {
            cout << " The name must be from 3 to 20 characters.\n";
            return;
        }
        for (char c : Name) {
            if (!isalpha(c)) {
                cout << "The name must be letters only.\n";
                return;
            }
        }
    this->Name=Name ;
}

void Person::setPassword(string Password){
    if (Password.size() < 8 || Password.size() > 20) {
            cout << "The password must be from 8 to 20 characters.\n";
            return;
        }
        if (Password.find(' ') != string::npos) {
            cout << "The password cannot contain spaces.\n";
            return;
        }
    this->Password=Password ;
}

int Person::getId() { return Id; }

string Person::getName() { return Name; }

string Person::getPassword() { return Password; }


void Person::print(){
    cout<< "ID: " << Id << ", Name: " << Name << ", Password: "<< Password << endl;
}
