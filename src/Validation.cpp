#include "Validation.h"
#include <cctype>
#include <iostream>
using namespace std;

bool Validation::validateName(const string& name) {
    if (name.size() < 3 || name.size() > 20) {
        cout << " Name must be between 3 and 20 characters"<<endl;
        return false;
    }
    for (char c : name) {
        if (!isalpha(c)) {
            cout << " Name must contain letters only"<<endl;
            return false;
        }
    }
    return true;
}

bool Validation::validatePassword(const string& password) {
    if (password.size() < 8 || password.size() > 20) {
        cout << " Password must be between 8 and 20 characters"<<endl;
        return false;
    }
    if (password.find(' ') != string::npos) {
        cout << " Password must not contain spaces"<<endl;
        return false;
    }
    return true;
}

bool Validation::validateBalance(double balance) {
    if (balance < 1500) {
        cout << " Minimum balance is 1500"<<endl;
        return false;
    }
    return true;
}

bool Validation::validateSalary(double salary) {
    if (salary < 5000) {
        cout << " Minimum salary is 5000"<<endl;
        return false;
    }
    return true;
}
