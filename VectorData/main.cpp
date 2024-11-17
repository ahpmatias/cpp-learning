#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> myNums;
	bool collectNums = true;
	int inputNumber;
	cout << "Enter a positive integer to add to the vector, or negative integer to quit!" << endl;
	cin >> inputNumber;
	myNums.push_back(inputNumber);

	while (collectNums == true)
	{
		cout << "Enter a positive integer to add to the vector, or negative integer to quit!" << endl;
		cin >> inputNumber;

		if (inputNumber >= 0)
		{
			myNums.push_back(inputNumber);
			continue;
		}
		else
		{
			collectNums = false;
		}
	}

	cout << "Now here are double the amounts: " << endl;

	for (int num : myNums)
	{
		cout << num * 2 << endl;
	}

	return 0;
}