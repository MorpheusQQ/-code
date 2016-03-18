// Section 2.2 Inheritance and Polymorphism
// p. 71
// class Person (base class)

#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person {
public:
	// ...
	Person(const string& personName, const string& personIdNum);
	virtual void print();		// dynamic binding and virtual functions; pp.76-77
	string getName();
private:						// try to change this line to protected:
	string name;
	string idNum;
};

#endif
