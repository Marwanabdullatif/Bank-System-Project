#include <iostream>
#include <string>
#include<Person.h>
#include<Client.h>
using namespace std;

int main()
{
    Client c;

    c.setId(202);
    c.setName("Omar");
    c.setPassword("omar123456");

     c.setBalance(5000);
    c.deposit(2000);
    c.withdraw(1000);

     cout << "Client Info:" << endl;
    cout << "ID: " << c.getId() << endl;
    cout << "Name: " << c.getName() << endl;
    cout << "Password: " << c.getPassword() << endl;
    c.checkBalance();

    return 0;
}
