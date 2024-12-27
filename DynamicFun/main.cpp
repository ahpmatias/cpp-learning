#include <iostream>

using namespace std;

int main()
{
	int* myIntPtr = new int(123);

	cout << *myIntPtr << endl;

	delete  myIntPtr;

	myIntPtr = nullptr;
	
	bool someBool;
	bool* myBoolPtr = new bool(true);

	cout << boolalpha << *myBoolPtr << endl;

	delete myBoolPtr;
	myBoolPtr = nullptr;

	return 0;
}