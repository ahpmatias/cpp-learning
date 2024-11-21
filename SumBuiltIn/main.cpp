#include <iostream>
#include <array>

using namespace std;

int sumArray(int arr[], int size);

int main()
{
	int intArray[]{1,2,3,4,5};

	int result = sumArray(intArray, 5);

	cout << "The sum of the items in the array is " << result << endl;
	return 0;
}

int sumArray(int arr[], int size)
{
	int sum = 0;
	for (int i=0; i < size ; i++)
	{
		sum += arr[i];
	}
	return sum;
}