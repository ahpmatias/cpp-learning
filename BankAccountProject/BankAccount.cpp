#include "BankAccount.h"
#include <string>
#include <iostream>

using namespace std;

BankAccount::BankAccount(string owner)
{
	this->owner = owner;
	this->balance = 0;
}

BankAccount::BankAccount(string owner, int balance)
{
	this->owner = owner;
	if (balance <= 0)
	{
		cout << "Please enter an integer greater than 0." << endl;
	}
	else
	{
		this->balance = balance;
	}

	this->balance = balance;
}

void BankAccount::deposit(int amount)
{
	if (amount >= 0)
	{
		balance += amount;
		printBalance();
	}
	else
	{
		cout << "The amount to deposit must be greater than 0." << endl;
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount > balance)
	{
		cout << "Not enough funds." << endl;
	}
	else
	{
		balance -= amount;
		printBalance();
	}
}

string BankAccount::getOwner() const
{
	return owner;
}

int BankAccount::getBalance() const
{
	return balance;
}

void BankAccount::printBalance()
{
	cout << owner << "'s current account balance: " << balance << endl;
}
