// Section 2.2 Inheritance and Polymorphism
// p. 72
// class Student (derived class)

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Person.h"		// Important! Try to comment this to see the error

using namespace std;

class Student : public Person {		// public inheritance
public:
	Student(const string& studentName, const string& studentIdNum, const string& studentMajor, const int& studentGradYear);
	virtual void print();							// specialization; override the print() function of class Person; pp.77-79
	void changeMajor(const string& newMajor);		// extension to class Person; add new function
private:
	string major;
	int gradYear;
};

#endif
