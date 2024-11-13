#include <iostream>
using namespace std;

int main()
{
	//priming read
	int input;
	int sum = 0;
	cout << "Please enter a non-negative integer if you want to continue, or a negative number if you want to quit" << endl;
	cin >> input;

	while (input >= 0)
	{
		sum += input;
		cout << "Please enter a non-negative integer if you want to continue, or a negative number if you want to quit" << endl;
		cin >> input;
		
	}

	cout << "Sum of values: " << sum << endl;


	return 0;
}