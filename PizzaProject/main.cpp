#include <iostream>
#include <vector>
#include "Pizza.h"
#include <array>

using namespace std;

int main()
{
	Pizza cheesePizza("Cheese Pizza", 5, 20);
	Pizza pepperoniPizza("Pepperoni Pizza", 7, 25);
	Pizza theSpecialPizza("The Special Pizza", 9, 30);

	pepperoniPizza.addTopping("Pepperoni");

	string specialPizzaToppings[4] = {"Pepperoni","Black Olives","Onion","Mushroom"};

	for (string topping : specialPizzaToppings)
	{
		theSpecialPizza.addTopping(topping);
	}

	Pizza listOfPizzas[3] = { cheesePizza,pepperoniPizza, theSpecialPizza };

	for (Pizza pizza : listOfPizzas)
	{
		pizza.printToppings();
	}

	return 0;
}