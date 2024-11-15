#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int ARRAY_SIZE = 5;

	int myArray[ARRAY_SIZE];
	string names[4]{ "Bob","Sally","John","Ed" };

	myArray[0] = 15;
	myArray[1] = 20;
	myArray[2] = 22;
	myArray[3] = 13;
	myArray[4] = 6;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << myArray[i] << endl;
	}

	cout << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << names[i] << endl;
	}

	//Another form to do a for loop through an array ("Syntactic sugar")
	for (string name : names) //"auto" instead of "string" can be used
	{
		cout << name << endl;
	}

	return 0;
}
