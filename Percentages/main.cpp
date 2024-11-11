#include <iostream>
#include <string>

using namespace std;

int main()
{
	string fullName;
	string location;
	int initialScore;

	cout << "Please enter your name" << endl;
	getline(cin, fullName);

	cout << "Please enter your city" << endl;
	getline(cin, location);

	cout << "Give an integer between 0 and 100" << endl;
	cin >> initialScore;

	cout << "Hello, " << fullName << endl;
	cout << "We heard you are from " << location << endl;
	cout << "Your original score is " << initialScore << ", but with five points added, your score is " << (initialScore + 5) << endl;

	return 0;
}