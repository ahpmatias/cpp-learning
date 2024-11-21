#include <iostream>

using namespace std;

int factorial(int num);

int main()
{
	int factorialResult = factorial(6);

	cout << factorialResult << endl;
	return 0;
}

int factorial(int num)
{
	if (num >= 1)
	{
		return num * factorial(num - 1);
	}
}