#include <iostream>

using namespace std;

void printHello();
void printNumber(int a);
int giveMe10();
int addThese(int num1, int num2);
int square(int num);


int main()
{
	int num1 = 120;
	int num2 = 580;

	printHello();
	printNumber(100);

	int someData = giveMe10();
	cout << someData << endl;

	int totalValue = addThese(num1, num2);
	cout << totalValue << endl;

	printNumber(addThese(num1, 50));

	int result = square(giveMe10());
	cout << result << endl;

	return 0;
}

void printHello()
{
	cout << "Hello!" << endl;
}

void printNumber(int a)
{
	cout << "The number is " << a << endl;
}

int giveMe10()
{
	return 10;
}

int addThese(int num1, int num2)
{

	return num1 + num2;
}

int square(int num)
{
	return num * num;
}