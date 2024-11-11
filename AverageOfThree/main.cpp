#include <iostream>
#include <string>

using namespace std;

int main()
{
	double num1;
	double num2;
	double num3;

	cout << "Please enter a real number" << endl;
	cin >> num1;

	cout << "Now, enter another real number" << endl;
	cin >> num2;

	cout << "Now, enter the final real number" << endl;
	cin >> num3;

	double averageNumber = (num1 + num2 + num3) / 3;

	cout << "Average is " << averageNumber << endl;


	return 0;
}