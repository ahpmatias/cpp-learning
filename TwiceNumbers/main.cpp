#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 10> twiceNumbersArray{};

	for (int i = 0; i < twiceNumbersArray.size(); i++)
	{
		twiceNumbersArray[i] = i * 2;
	}

	for (auto number : twiceNumbersArray)
	{
		cout << number << endl;
	}
	return 0;
}