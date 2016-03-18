#include <iostream>
#include "Student.h"

Student::Student(const string& studentName, const string& studentIdNum, const string& studentMajor, const int& studentGradYear)	// constructor; p.75
	: Person(studentName, studentIdNum), major(studentMajor), gradYear(studentGradYear) {		// initializer list; Section 1.5.2, p.39
	// name = studentName;		// This line only works when the member variable name is protected, not private; pp.73-74
}

void Student::print() {		// specialization; override the print() function of class Person; pp.77-79
	Person::print();		// :: class scope operator
	cout << "Major = " << major << endl;
	cout << "Year = " << gradYear << endl;
}

void Student::changeMajor(const string& newMajor) {		// extension to class Person; add new function
	major = newMajor;
}