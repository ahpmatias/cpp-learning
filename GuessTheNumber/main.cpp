#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(nullptr));

	int guess = 0;
	int randomNumber = rand() % 100 + 1;
	int counter = 0;

	while (guess != randomNumber)
	{
		cout << "Enter a guess" << endl;
		cin >> guess;

		if (guess < randomNumber)
		{
			cout << "Your guess is too low!" << endl;
			counter++;
		}
		else if (guess > randomNumber)
		{
			cout << "Your guess is too high!" << endl;
			counter++;
		}
		else if (guess < 1 || guess > 100)
		{
			cout << "You've wasted a guess. Please guess a number between 1 and 100." << endl;
		}
		
	}

	cout << "Congratulations! You guessed the number in " << counter << " guesses!" << endl;
	cout << "Thanks for playing!" << endl;
	
	return 0;
}