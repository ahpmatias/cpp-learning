#include <iostream>
#include <stdexcept>
#include "Dog.h"

using namespace std;

int main()
{
	try
	{
		Dog dog1("Rottweiler");
		Dog dog2("Dachshund");
		Dog dog3("Fila");
		Dog dog4("Poodle");
		Dog dog5("Pitbull");

		cout << dog1.getBreed() << endl;
		cout << dog2.getBreed() << endl;
		cout << dog3.getBreed() << endl;
	}
	catch (const runtime_error& err)
	{
		cerr << err.what() << endl;
	}
	return 0;
}