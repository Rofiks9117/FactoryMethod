#include "Pizza.h"

void Pizza::prepare()
{
	cout << "Preparing" << name << endl;
	cout << "Tossing dough..." << endl;
	cout << "Adding sause..." << endl;
	cout << "Adding toppings:"<< endl;

	for (string topping : toppings) {
		cout << "\t" << topping << endl;
	}
}

void Pizza::bake()
{
	cout << "Bake for  25 minutes at 350C" << endl;
}

void Pizza::cut()
{
	cout << "Cutting the pizza into diagonal slices" << endl;
}

void Pizza::box()
{
	cout << "Place pizza into diagonal slices" << endl;
}

string Pizza::getName()
{
	return name;
}