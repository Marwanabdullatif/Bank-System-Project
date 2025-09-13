#include <iostream>
#include <string>
#include<Person.h>
#include<Client.h>
#include<Employee.h>
#include<Admin.h>
#include<Parser.h>
#include<FileHelper.h>
using namespace std;

int main()
{
    Client c(202, "Omar", "omar123456", 5000);

    Client c2(303, "Ali", "ali999", 2000);

    c.deposit(1000);
    c.withdraw(500);
    c.transferTo(300, c2) ;

    c.setBalance(5000);
    c.deposit(2000);
    c.withdraw(1000);

     c.print();
    c.checkBalance();

    cout <<endl<< "Recipient Info:"<<endl;
    c2.print();
    c2.checkBalance();

    Employee E1(2, "Rana", "Mah1256", 6000);
    E1.print();

    Admin A1(1001, "Tamer", "Teo1515", 9000);
    A1.print();

    string clientLine = "1,Ali,1234,5000";
    string employeeLine = "2,Omar,5678,7000";
    string adminLine = "3,Laila,abcd,12000";

    Client c3 = Parser::parseToClient(clientLine);
    Employee e = Parser::parseToEmployee(employeeLine);
    Admin a = Parser::parseToAdmin(adminLine);

    c3.print();
    e.print();
    a.print();

    FilesHelper::clearFile("Client.txt","lastClientId.txt");
    FilesHelper::clearFile("Employee.txt","lastEmployeeId.txt");
    FilesHelper::clearFile("Admin.txt","lastAdminId.txt");

    FilesHelper::saveClient(c3);
    FilesHelper::saveEmployee("Employee.txt","lastEmployeeId.txt",e);
    FilesHelper::saveAdmin("Admin.txt","lastAdminId.txt",a);

    vector<Client>client=FilesHelper::getClients();
    vector<Employee>employee=FilesHelper::getEmployee();
    vector<Admin>admin=FilesHelper::getAdmin();
    cout <<"======Client======"<<endl;
    for(Client c3:client){
        c3.print();
    }
    cout <<"======Employee======"<<endl;
    for(Employee e:employee){
        e.print();
    }
    cout <<"======Admin======"<<endl;
    for(Admin a:admin){
        a.print();
    }



    return 0;
}



