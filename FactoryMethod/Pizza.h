#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Pizza
{
protected:
	string name;
	string dough;
	string sause;
	vector<string> toppings;

public:
	void prepare();
	void bake();
	void cut();
	void box();
	string getName();
};

