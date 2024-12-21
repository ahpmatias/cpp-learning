#include <iostream>
#include "Spaceship.h"

using namespace std;

bool warpTest(int temp);

int main()
{
	try
	{
		warpTest(20);
		warpTest(40);
		warpTest(60);
		warpTest(80);
		warpTest(100);
	}

	catch (const WarpDriveOverheating& err)
	{
		cout << err.what() << "endl";
	}

	return 0;
}

bool warpTest(int temp)
{
	if (temp <= 80)
	{
		cout << "Temperature is within tolerance." << endl;
	}
	else
	{
		throw WarpDriveOverheating();
	}
}