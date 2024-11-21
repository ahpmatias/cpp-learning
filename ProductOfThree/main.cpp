#include <iostream>

using namespace std;

double multiply(int num1, int num2, int num3);

int main()
{
	double productResult = multiply(2, 10, 10);

	cout << "Solution is " << productResult << endl;
	return 0;
}

double multiply(int num1, int num2, int num3)
{
	return num1 * num2 * num3;
}