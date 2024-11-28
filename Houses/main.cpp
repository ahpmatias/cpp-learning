#include <iostream>
#include <string>
#include "House.h"

using namespace std;

int main()
{
	House myHouse;
	House yourHouse;
	House anotherHouse(3, 7, "green");

	anotherHouse.print();

	myHouse.print();

	myHouse.setNumStories(2);
	myHouse.setNumWindows(6);
	myHouse.setColor("red");

	yourHouse.setNumStories(3);
	yourHouse.setNumWindows(10);
	yourHouse.setColor("blue");

	myHouse.print();
	yourHouse.print();

	return 0;
}

