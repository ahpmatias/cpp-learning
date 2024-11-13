#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(nullptr));

	//int val1 = rand() % 10; //val1 will be >= 0 and < 10

	////shift it
	//int val2 = rand() % 10 + 1; //val2 will be >= 1 and <= 10

	//cout << val1 << endl;
	//cout << val2 << endl;

	int dieRoll;

	for (int i = 0; i < 10; i++) 
	{
		dieRoll = rand() % 6 + 1;
		cout << dieRoll << endl;
	}

	return 0;
}