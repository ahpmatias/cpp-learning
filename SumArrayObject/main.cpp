#include <iostream>
#include <array>

using namespace std;

int sumArray(int array[]);
int sumArray2(array<int, 10> someArray);
void sumArray(array<int, 10> someArray, int& theSum);

int main()
{
	const int ARRAY_SIZE = 10;
	int myArray[ARRAY_SIZE]{ 0,1,2,3,4,5,6,7,8,9 };

	int sumResult = sumArray(myArray);

	cout << "The sum is " << sumResult << endl;

	//Another way to achieve the same result
	cout << endl << "Another alternative: " << endl;

	array<int, 10> myArray2{ 0,1,2,3,4,5,6,7,8,9 };

	int sumResult2 = sumArray2(myArray2);

	cout << "The sum is " << sumResult2 << endl;

	cout << endl;
	//And third way passing a parameter by reference
	array<int, 10> myArray3{ 0,1,2,3,4,5,6,7,8,9 };
	int resultRef;
	sumArray(myArray3, resultRef);
	cout << "Result by ref is " << resultRef << endl;

	return 0;

	
}

int sumArray(int someArray[])
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += someArray[i];
	}

	return sum;
}

int sumArray2(array<int, 10> someArray)
{
	int sum = 0;
	for (int num : someArray)
	{
		sum += num;
	}
	return sum;
}

void sumArray(array<int, 10> someArray, int& theSum)
{
	theSum = 0;
	for (int num : someArray)
	{
		theSum += num;
	}
}