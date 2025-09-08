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

    return 0;
}



