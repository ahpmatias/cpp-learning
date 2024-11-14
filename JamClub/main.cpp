#include <iostream>
using namespace std;

int main()
{
	const int COST_PACKAGE_A = 8;
	const int ADD_JAM_PACK_A = 5;
	const int INCLUDED_JAMS_A = 2;
	const int COST_PACKAGE_B = 12;
	const int ADD_JAM_PACK_B = 4;
	const int INCLUDED_JAMS_B = 4;
	const int COST_PACKAGE_C = 15;
	const int ADD_JAM_PACK_C = 3;
	const int INCLUDED_JAMS_C = 6;

	char package;

	cout << "Which Package do you have? A, B or C." << endl;
	cin >> package;
	/*if (package != 'A') {
		if (package != 'B') {
			if (package != 'C') {
				cout << "You've entered an invalid package. Enter A, B or C" << endl;
				cin >> package;
			}
		}
	}	*/	

	int quantityJams;
	cout << "How many jams did you purchase this month?" << endl;
	cin >> quantityJams;

	if (package == 'A' || package == 'a')
	{
		if (quantityJams <= INCLUDED_JAMS_A)
		{
			cout << "You owe $" << COST_PACKAGE_A <<"." << endl;
		}
		else
		{
			int owedAmount = COST_PACKAGE_A + (ADD_JAM_PACK_A * (quantityJams - INCLUDED_JAMS_A));
			cout << "You owe $" << owedAmount << "." << endl;
		}
	}

	else if (package == 'B' || package == 'b')
	{
		if (quantityJams <= INCLUDED_JAMS_B)
		{
			cout << "You owe $" << COST_PACKAGE_B << "." << endl;
		}
		else
		{
			int owedAmount = COST_PACKAGE_B + (ADD_JAM_PACK_B * (quantityJams - INCLUDED_JAMS_B));
			cout << "You owe $" << owedAmount << "." << endl;
		}
	}
	else if (package == 'C' || package == 'c')
	{
		if (quantityJams <= INCLUDED_JAMS_C)
		{
			cout << "You owe $" << COST_PACKAGE_C << "." << endl;
		}
		else
		{
			int owedAmount = COST_PACKAGE_C + (ADD_JAM_PACK_C * (quantityJams - INCLUDED_JAMS_C));
			cout << "You owe $" << owedAmount << "." << endl;
		}
	}

	return 0;
}
