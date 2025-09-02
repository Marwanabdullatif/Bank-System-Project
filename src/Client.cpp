#include "Client.h"
#include <iostream>
using namespace std;

Client::Client() : Person(){
    Balance = 1500;
}

Client::Client(int Id, string Name, string Password, double Balance) : Person(Id, Name, Password) {
    this->Balance = Balance;
}

void Client::setBalance(double Balance) {
    if (Balance >= 0) {
        Balance = Balance;
    } else {
        cout << "Invalid balance!" << endl;
    }
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
    cout<< endl;
}

void Client::print2(){
    cout << "Client Info:" << endl;
    cout << "ID: " << getId() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Password:"<< getPassword()<< endl;
    cout << "Balance: " << Balance << endl;
}




