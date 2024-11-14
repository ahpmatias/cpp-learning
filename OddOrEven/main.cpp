#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i <= 50; i++)
	{
		if (i % 2 != 0)
		{
			cout << i << " is odd." << endl;
		}
		else if (i % 2 == 0)
		{
			cout << i << " is even." << endl;
		}
	}
	return 0;
}