#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;

class Person
{
private:
    int Id;
    string Name ;
    string Password ;
public:
    Person(int Id,string Name,string Password);
    void setId(int Id);
    void setName(string Name) ;
    void setPassword(string Password);

    int getId();
    string getName();
    string getPassword() ;

    void print();

};

#endif // Person_H
