#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include "Circle.h"


using namespace std;

int main()
{
	Circle oneCircle;
	Circle anotherCircle(5);

	cout << "Circle 1 (radius 1): " << endl;
	cout << "Circumference: " << oneCircle.circumference() << endl;
	cout << "Area: " << oneCircle.area() << endl;

	cout << endl;

	cout << "Circle 2 (radius 5): " << endl;
	cout <<"Circumference: " << anotherCircle.circumference() << endl;
	cout << "Area: " << anotherCircle.area() << endl;

	cout << endl;

	oneCircle.setRadius(10);

	cout << "Circle 1 after changed radius to 10: " << endl;
	cout << "Circumference: " << oneCircle.circumference() << endl;
	cout << "Area: " << oneCircle.area() << endl;

	return 0;
}