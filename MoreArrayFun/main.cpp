#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 10;
	int newArray[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		newArray[i] = i + 1;
	}

	for (auto number : newArray)
	{
		cout << number << endl;
	}
	
	return 0;
}