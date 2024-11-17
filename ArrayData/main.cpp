#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 5> intArray;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter an integer" << endl;
		cin >> intArray[i];
	}

	cout << endl;
	cout << "Now here are double the amounts: " << endl;
	for (int number : intArray)
	{
		cout << number * 2 << endl;
	}
	return 0;
}