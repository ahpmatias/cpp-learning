#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	const int NUM_INPUTS = 5;
	vector<string> names;
	vector<int> weights;
	string fullName;
	int weightValue;

	for (int i = 0; i < NUM_INPUTS; i++)
	{
		cout << "Please enter a person's full name." << endl;
		getline(cin, fullName);
		names.push_back(fullName);

		cout << "Please enter " << fullName << "'s weight." << endl;
		cin >> weightValue;
		cin.get();
		weights.push_back(weightValue);
	}
	cout << endl;

	for (int i = 0; i < NUM_INPUTS; i++)
	{
		cout << names[i] << " weighs " << weights[i] << "Kg." << endl;
	}

	return 0;
}