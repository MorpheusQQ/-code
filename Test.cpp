// Section 2.2 Inheritance and Polymorphism
// p. 73
// main function

#include <cstdlib>
#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

int main() {
	Person person("Mary", "12-345");
	Student student("Bob", "98-765", "Math", 2012);

	cout << "A person called " << person.getName() << endl;
	cout << "A student called " << student.getName() << endl << endl;

	cout << "Person print:" << endl;
	person.print();
	cout << endl << "Student print:" << endl;
	student.print();
	student.changeMajor("League of Legends");
	cout << endl << "Student print after changing major:" << endl;
	student.print();

	// Dynamic binding and virtual function; pp.76-77
	Person* pp[100];
	pp[0] = new Person("Person1", "1234");
	pp[1] = new Student("Student1", "5678", "Star Craft 2", 9999);
	cout << endl << "Dynamic binding:" << endl;
	pp[0]->print();
	pp[1]->print();

	return EXIT_SUCCESS;
}
