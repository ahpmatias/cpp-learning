#include <iostream>
#include "BankAccount.h"
#include <string>

using namespace std;

int main()
{
	BankAccount myAccount("John");
	BankAccount yourAccount("Andrew", 500);

	myAccount.deposit(200);
	yourAccount.withdraw(200);
	
	return 0;
}