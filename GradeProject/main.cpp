#include <iostream>
#include <stdexcept>
#include <string>


using namespace std;

string getLetterGrade(int grade);

int main()
{
	try
	{
		cout << getLetterGrade(91) << endl;
		cout << getLetterGrade(20) << endl;
		cout << getLetterGrade(120) << endl;
	}
	catch (const out_of_range& err)
	{
		cout << err.what() << endl;
	}
	

	return 0;
}

string getLetterGrade(int grade)
{
	if ((grade < 0) || (grade > 100))
	{
		throw out_of_range("Your percent must be within 0 and 100, inclusive.");
	}
	else
	{
		if ((grade >= 0) && (grade <= 59))
		{
			return "F";
		}
		else if ((grade >= 60) && (grade <= 69))
		{
			return "D";
		}
		else if ((grade >= 70) && (grade <= 79))
		{
			return "C";
		}
		else if ((grade >= 80) && (grade <= 89))
		{
			return "B";
		}
		else if ((grade >= 90) && (grade <= 100))
		{
			return "A";
		}
	}
}