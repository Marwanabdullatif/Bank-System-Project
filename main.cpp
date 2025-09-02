#include <iostream>
#include <string>
#include<Person.h>
#include<Client.h>
#include<Employee.h>
#include<Admin.h>
using namespace std;

int main()
{
    Client c(202, "Omar", "omar123456", 5000);
    Client c2(303, "Ali", "ali999", 2000);

    c.deposit(1000);
    c.withdraw(500);
    c.transferTo(300, c2) ;

    c.print2();
    c.checkBalance();

    cout <<endl<< "Recipient Info:"<<endl;
    c2.print2();
    c2.checkBalance();

    Employee E1(2, "Rana", "Mah1256", 6000);
    E1.print3();


    Admin A1(10,"ahmed","Amd1567",10000);
    A1.print4();

    return 0;
}



