#include "Pizza.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Pizza::Pizza(string name, int cost, int diameter)
{
	this->name = name;
	this->cost = cost;
	this->diameter = diameter;
	this->toppings = { "Cheese" };
}

void Pizza::addTopping(string topping)
{
	toppings.push_back(topping);
}

int Pizza::getCost() const
{
	return cost;
}

void Pizza::printToppings() const
{
	cout << "Name: " << name << endl;
	cout << "Cost: " << cost << endl;
	cout << "Size (cm): " << diameter << endl;
	cout << "Toppings:" << endl;

	for (string topping: toppings)
	{
		cout<< "	" << topping << endl;
	}

	cout << endl;
}
