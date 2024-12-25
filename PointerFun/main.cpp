#include <iostream>

using namespace std;

int main()
{
	int myLovelyInt = 150;
	int* somePtr = &myLovelyInt;

	cout << "myLovelyInt is originally: " << myLovelyInt << endl;
	cout << "Pointer holds value: " << somePtr << endl;
	cout << "Pointer dereferenced: " << *somePtr << endl;

	*somePtr = 200;

	cout << "myLovelyInt is now: " << myLovelyInt << endl;

	double myDouble = 3.14;
	double* doublePointer = &myDouble;

	cout << doublePointer << endl;
	cout << *doublePointer << endl;

	return 0;
}