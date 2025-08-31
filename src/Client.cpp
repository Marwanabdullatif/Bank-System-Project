#include "Client.h"
#include <iostream>
using namespace std;

void Client::setBalance(double Balance){
    if(Balance < 1500){
        cout<< "The minimum balance must be 1500";
        return;
    }
    this->Balance=Balance;
}

double Client::getBalance(){
    return Balance;
}

void Client::deposit(double amount){
    if(amount > 0){
        Balance += amount;
    } else {
        cout << "Deposit amount must be positive" << endl;
    }
}


void Client::withdraw(double amount){
    if(amount > 0 && amount <= Balance){
        Balance -= amount;
    } else {
        cout << "Invalid withdraw amount" << endl;
    }
}

void Client::transferTo(double amount, Client& recipient){
    if(amount > 0 && amount <= Balance){
        Balance -= amount;
        recipient.deposit(amount);
        cout << "Transfer successful" << endl;
    } else {
        cout << "Transfer failed. Invalid amount or insufficient balance" << endl;
    }
}


void Client::checkBalance(){
    cout << "Your current balance is: " << Balance << endl;
}

void Client::print2(){
    cout << "Client Info:" << endl;
    cout << "ID: " << getId() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Balance: " << Balance << endl;
}




