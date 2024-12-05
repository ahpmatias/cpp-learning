#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main()
{
	vector<int> myNums;

	try
	{
		myNums.resize(myNums.max_size() + 1);
	}
	catch (const length_error& err)
	{
		cout << err.what() << endl;
	}

	cout << "Wow, that's a big vector!" << endl;

	return 0;
}