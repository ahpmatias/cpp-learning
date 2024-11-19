#include <iostream>
#include <string>
using namespace std;

int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int num);

int main()
{
	int resultNum = getResult(30, 20);
	string nameResult = getResult("Anderson", "Matias");
	int testNumber = 2;
	int cube = getResult(testNumber);

	cout << "Result num is " << resultNum << endl;
	cout << "Name result is " << nameResult << endl;
	cout << "The cube of " << testNumber << " is " << cube << endl;
	return 0;
}

int getResult(int num1, int num2)
{
	return num1 * num2;
}

string getResult(string str1, string str2)
{
	return str1 + " " + str2;
}

int getResult(int num)
{
	return num * num * num;
}