#include <iostream>
using namespace std;

int main()
{
	////while loop
	//int count = 0;

	//while (count < 10) {
	//	cout << count << endl;
	//	count++;
	//}

	//cout << endl;

	////do-while loop
	//
	//int count2 = 0;
	//do {
	//	cout << count2 << endl;
	//	count2++;
	//} while (count2 < 10);

	//cout << endl;

	////for loop
	//for (int i = 0; i < 10; i++) {
	//	cout << i << endl;
	//}
	//priming read
	int input;
	cout << "Please enter a non-negative integer to continue, ";
	cout << "or negative if you want to quit" << endl;

	cin >> input;

	while (input >= 0)
	{
		cout << "Please enter a non-negative integer to continue, ";
		cout << "or negative if you want to quit" << endl;

		cin >> input;
	}//end while
	return 0;
}