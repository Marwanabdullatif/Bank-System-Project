#include "EmployeeManger.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void EmployeeManger::printEmployeeMenu(){
    cout<<"====Employee Menu===="<<endl;
    cout << "1. Add New Client"<<endl;
    cout << "2. List All Clients"<<endl;
    cout << "3. Search For Client"<<endl;
    cout << "4. Edit Client Info"<<endl;
    cout << "5. Logout"<<endl;
    cout << "===================="<<endl;
}
void EmployeeManger::newClient(Employee* employee) {
    int Id;
    string name, password;
    double balance;

    cout << "Enter Client ID: "<<endl;
    cin >> Id;
    vector<Client>client=FilesHelper::getClients();
    for (Client&C:client){
        if(C.getId()==Id){
            cout <<"error:Client with this Id already exists"<<endl;
            return;
        }
    }
cout << "Enter Client Name: "<<endl;
    cin.ignore();
    getline(cin, name);

    if (name.empty()) {
        cout << "Error: Name can not be empty"<<endl;
        return;
    }

    cout << "Enter Client Password: "<<endl;
    cin >> password;
    if (password.length() < 4) {
        cout << "Error: Password must be at least 4 characters long"<<endl;
        return;
    }

    cout << "Enter Initial Balance: "<<endl;
    cin >> balance;
    if (balance < 0) {
        cout << "Error: Balance can not be negative"<<endl;
        return;
    }

    Client newC(Id, name, password, balance);
    FilesHelper::saveClient(newC);
    cout << "Client added successfully by " << employee->getName()<<endl ;
}
void EmployeeManger::listAllClient(Employee* employee) {
    vector<Client> clients = FilesHelper::getClients();
    cout << "=== All Clients ==="<<endl;
    for (Client& c : clients) {
        c.print();
    }
}

void EmployeeManger::searchforClient(Employee* employee) {
    int Id;
    cout << "Enter Client ID to search: ";
    cin >> Id;

    vector<Client> clients = FilesHelper::getClients();
    for (auto&c:clients)
{
    if (c.getId() == Id)
  {
    cout << "Client found:"<<endl;
     c.print();
      return;
    }
}
    cout << "Client not found"<<endl;

}

void EmployeeManger::editClientInfo(Employee* employee) {
    int Id;
    cout << "Enter Client ID to edit: ";
    cin >> Id;
vector<Client> clients = FilesHelper::getClients();
 bool found = false;
 for (Client& c : clients) {
   if (c.getId() == Id) {
    found = true;
cout << "Editing Client " << c.getName() << endl;
 string newName, newPassword;
 double newBalance;
   cout << "Enter new name: ";
   cin >> newName;
   cout << "Enter new password: ";
   cin >> newPassword;
   cout << "Enter new balance: ";
   cin >> newBalance;
     c.setName(newName);
     c.setPassword(newPassword);
     c.setBalance(newBalance);
break;
}
    }
 if (found) {
    ofstream out("Clients.txt", ios::trunc);
    for (Client& c : clients) {
        out << c.getId() << "," << c.getName() << "," << c.getPassword() << "," << c.getBalance() << endl;
}
    out.close();
        cout << "Client info updated successfully";
}
 else {
        cout << "Client not found";
    }
}
Employee* EmployeeManger::login(int Id, string password) {
vector<Employee> employees = FilesHelper::getEmployee();
    for (auto& e : employees) {
        if (e.getId() == Id && e.getPassword() == password) {
            cout << "Login successful Welcome " << e.getName() << endl;
            return new Employee(e);
}
 }
    cout << "Invalid ID or Password"<<endl;
    return nullptr;
}
bool EmployeeManger::employeeOptions(Employee* employee) {
    int choice;
    do {
        printEmployeeMenu();
        cout << "Choose option: ";
        cin >> choice;

switch (choice) {
  case 1:
    newClient(employee);
     break;
  case 2:
    listAllClient(employee);
     break;
  case 3:
    searchforClient(employee);
      break;
  case 4:
     editClientInfo(employee);
        break;
  case 5:
    cout << "Logging out...";
      return false;
default:
    cout << "Invalid choice";
}
    } while (true);

    return true;
}



