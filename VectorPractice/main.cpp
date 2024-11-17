#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector <string> someNames;

	someNames.push_back("Anderson");
	someNames.push_back("Vanessa");
	someNames.push_back("Italo");
	someNames.push_back("Adriana");
	someNames.push_back("Liz");

	someNames.insert(someNames.begin() + 2, "John Baugh");
	someNames.pop_back();

	for (string name : someNames)
	{
		cout << name << endl;
	}
	return 0;
}