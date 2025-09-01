#ifndef CLIENT_H
#define CLIENT_H
#include<Person.h>

class Client : public Person
{
 private:
    double Balance;
 public:
    Client();
    Client(int Id, string Name, string Password, double Balance);

    void setBalance(double Balance);
    double getBalance();

    void deposit(double amount);
    void withdraw(double amount);
    void transferTo(double amount,Client& recipient);
    void checkBalance();
    void print2();

};

#endif // CLIENT_H
