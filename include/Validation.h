#ifndef VALIDATION_H
#define VALIDATION_H

#include <string>
using namespace std;

class Validation {
public:
     static bool validateName(const string& name);

     static bool validatePassword(const string& password);

     static bool validateBalance(double balance);

     static bool validateSalary(double salary);
};

#endif // VALIDATION_H
