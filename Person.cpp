#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(const string& personName, const string& personIdNum)		// constructor; p.75
	: name(personName), idNum(personIdNum) {}							// initializer list; Section 1.5.2, p.39

void Person::print() {							// p.73
	cout << "Name = " << name << endl;
	cout << "IDnum = " << idNum << endl;
}

string Person::getName() {
	return name;
}
