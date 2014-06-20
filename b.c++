#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(int balance)
{
    setBalance(balance);
}

void Account::setBalance(int balance)
{
    //accountBalance = (balance >= 0) ? balance : 0;
    
    if (balance >= 0) {
        accountBalance = balance;
    } else {
        accountBalance = 0;
        cout << "The initial balance is invalid. Initial balance set as zero." << endl;
    }
}

int Account::getBalance()
{
    return accountBalance;
}

void Account::credit(int credit)
{
    accountBalance += credit;
}

void Account::debit(int debit)
{
    if (accountBalance >= debit) {
        accountBalance -= debit;
    } else {
        cout << "Debit amount exceeded account balance." << endl;
    }

}
