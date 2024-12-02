#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include <string>
#include <iostream>

using namespace std;

class BankAccount
{
	public:
		BankAccount(string owner);
		BankAccount(string owner, int balance);
		void deposit(int amount);
		void withdraw(int amount);
		string getOwner() const;
		int getBalance() const;
		void printBalance();

	private:
		string owner;
		int	balance;
};
#endif 
