 #include "Parser.h"
#include <sstream>

// a. split function
vector<string> Parser::split(string line) {
    vector<string> result;
    stringstream ss(line);
    string item;

    while (getline(ss, item, ',')) {
        result.push_back(item);
    }
    return result;
}

// b. parseToClient
Client Parser::parseToClient(string line) {
    vector<string> tokens = split(line);
    int id = stoi(tokens[0]);
    string name = tokens[1];
    string password = tokens[2];
    double balance = stod(tokens[3]);
    return Client(id, name, password, balance);
}

// c. parseToEmployee
Employee Parser::parseToEmployee(string line) {
    vector<string> tokens = split(line);
    int id = stoi(tokens[0]);
    string name = tokens[1];
    string password = tokens[2];
    double salary = stod(tokens[3]);
    return Employee(id, name, password, salary);
}

// d. parseToAdmin
Admin Parser::parseToAdmin(string line) {
    vector<string> tokens = split(line);
    int id = stoi(tokens[0]);
    string name = tokens[1];
    string password = tokens[2];
    double salary = stod(tokens[3]);
    return Admin(id, name, password, salary);
}
