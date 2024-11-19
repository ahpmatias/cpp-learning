#include <iostream>
using namespace std;

void someFunction(int aParam);

double myGlobalDouble = 3.14159;
int main()
{
	int localToMain = 20;
	cout << "The local to main variable is " << localToMain << endl;
	cout << "Global double (in main) is " << myGlobalDouble << endl;

	someFunction(25);
	someFunction(45);
	someFunction(32);

	return 0;
}

void someFunction(int aParam)
{
	int myLocalNum = 100;
	static int myStatic = 500;
	myStatic++;
	myLocalNum++;
	myGlobalDouble++;

	cout << "My local number is " << myLocalNum << endl;
	cout << "The parameters is " << aParam << endl;
	cout << "My global double (in some function) is " << myGlobalDouble << endl;
	cout << "My static variable " << myStatic << endl;
}