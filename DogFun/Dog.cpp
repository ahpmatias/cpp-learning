#include <iostream>
#include "Dog.h"

using namespace	std;

Dog::Dog(string breed)
{
	if (breed != "Poodle")
	{
		this->breed = breed;
	}
	else
	{
		throw runtime_error("Poodle? That's not a real dog! (Just kidding =P)");
	}
}

string Dog::getBreed() const
{
	return breed;
}