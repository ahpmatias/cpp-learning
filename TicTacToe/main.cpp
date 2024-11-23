#include <iostream>
#include <string>
#include <array>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

void printBoard(string array[ROWS][COLS]);
void generateBoard(string array[ROWS][COLS]);
void getUserInput(string array[ROWS][COLS], string input);
void runGame(string array[ROWS][COLS], bool gameStatus);

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
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
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