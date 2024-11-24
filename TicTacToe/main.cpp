#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

void printBoard(string array[ROWS][COLS]);
void generateBoard(string array[ROWS][COLS]);
void getUserInput(string array[ROWS][COLS], string input);
void runGame(string array[ROWS][COLS], bool gameStatus);
bool checkFullBoard(string array[ROWS][COLS], int turns);
bool checkWinner(string array[ROWS][COLS], string player);

int main()
{
	string ticTacToeArray[ROWS][COLS];

	generateBoard(ticTacToeArray);
	printBoard(ticTacToeArray);
	
	bool gameRunning = true;

	runGame(ticTacToeArray, gameRunning);

	return 0;
}

void printBoard(string array[ROWS][COLS])
{
	cout << array[0][0] << " | " << array[0][1] << " | " << array[0][2] << endl;
	cout << " - " << " - " << " - " << " - " << " - " << endl;
	cout << array[1][0] << " | " << array[1][1] << " | " << array[1][2] << endl;
	cout << " - " << " - " << " - " << " - " << " - " << endl;
	cout << array[2][0] << " | " << array[2][1] << " | " << array[2][2] << endl;
}

void generateBoard(string array[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array[i][j] = "   ";
		}
	}
}

void getUserInput(string array[ROWS][COLS], string player)
{
	string input;
	cout << "It is " << player << " turn." << endl;
	cout << "Please enter the row then the column number, each from 1, 2 or 3, separated by a space." << endl;
	getline(cin, input);
	
	int row = input[0] - '1';
	int col = input[2] - '1';

	array[row][col] = " " + player + " ";
}

void runGame(string array[ROWS][COLS], bool gameStatus)
{
	int counter = 0;
	while (gameStatus == true)
	{
		if (checkFullBoard(array, counter))
		{
			gameStatus = false;
		}
		else if (checkWinner(array, " X "))
		{
			gameStatus = false;
		}
		else if (checkWinner(array, " O "))
		{
			gameStatus = false;
		}
		else
		{
			if (counter % 2 == 0)
			{
				getUserInput(array, "X");
				printBoard(array);
				counter++;
			}
			else
			{
				getUserInput(array, "O");
				printBoard(array);
				counter++;
			}
		}		
	}
}

bool checkFullBoard(string array[ROWS][COLS], int turns)
{
	if (turns == ROWS * COLS)
	{
		cout << endl;
		cout << "The board is full, no winners! Thanks for playing." << endl;
		return true;
	}
	else
	{
		return false;
	}
}

bool checkWinner(string array[ROWS][COLS], string player)
{
	//check for winner on first row
	if ((array[0][0] != "   " && array[0][0] == player) &&
		(array[0][1] != "   " && array[0][1] == player) &&
		(array[0][2] != "   " && array[0][2] == player))
	{
		cout << endl;
		cout << "Player " << player << " won! Thanks for playing." << endl;
		return true;
	}
	//check for winner on second row
	else if ((array[1][0] != "   " && array[1][0] == player) &&
			 (array[1][1] != "   " && array[1][1] == player) &&
			 (array[1][2] != "   " && array[1][2] == player))
		 {
			cout << endl;
			cout << "Player " << player << " won! Thanks for playing." << endl;
			return true;
		 }
	//check for winner on third row
	else if ((array[2][0] != "   " && array[2][0] == player) &&
			 (array[2][1] != "   " && array[2][1] == player) &&
			 (array[2][2] != "   " && array[2][2] == player))
		 {	
			 cout << endl;
			 cout << "Player " << player << " won! Thanks for playing." << endl;
			 return true;
		 }
	//check for winner on first column
	else if ((array[0][0] != "   " && array[0][0] == player) &&
			 (array[1][0] != "   " && array[1][0] == player) &&
			 (array[2][0] != "   " && array[2][0] == player))
		 {
			 cout << endl;
			 cout << "Player " << player << " won! Thanks for playing." << endl;
			 return true;
		 }
	//check for winner on second column
	else if ((array[0][0] != "   " && array[0][0] == player) &&
			 (array[1][0] != "   " && array[1][0] == player) &&
			 (array[2][0] != "   " && array[2][0] == player))
		 {
			 cout << endl;
			 cout << "Player " << player << " won! Thanks for playing." << endl;
			 return true;
		 }
	//check for winner on third column
	else if ((array[0][0] != "   " && array[0][0] == player) &&
			 (array[1][0] != "   " && array[1][0] == player) &&
			 (array[2][0] != "   " && array[2][0] == player))
		 {
			 cout << endl;
			 cout << "Player " << player << " won! Thanks for playing." << endl;
			 return true;
		 }
	else if ((array[0][0] != "   " && array[0][0] == player) &&
			 (array[1][0] != "   " && array[1][0] == player) &&
			 (array[2][0] != "   " && array[2][0] == player))
		 {
			 cout << endl;
			 cout << "Player " << player << " won! Thanks for playing." << endl;
			 return true;
		 }
	//check for winner on diagonal left-to-right
	else if ((array[0][0] != "   " && array[0][0] == player) &&
			 (array[1][1] != "   " && array[1][1] == player) &&
			 (array[2][2] != "   " && array[2][2] == player))
		 {
			 cout << endl;
			 cout << "Player " << player << " won! Thanks for playing." << endl;
			 return true;
		 }
	//check for winner on diagonal right-to-left
	else if ((array[0][2] != "   " && array[0][2] == player) &&
			 (array[1][1] != "   " && array[1][1] == player) &&
			 (array[2][0] != "   " && array[2][0] == player))
		 {
			 cout << endl;
			 cout << "Player " << player << " won! Thanks for playing." << endl;
			 return true;
		 }
	else {
		return false;
	}
}