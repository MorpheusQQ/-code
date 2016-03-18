// 2.3 Templates
// pp. 90-91
// no template

#include <cstdlib>
#include <iostream>

using namespace std;

// function prototype
int integerMin (int a, int b);
double doubleMin(double a, double b);
char charMin(char a, char b);

int main() {
	cout << integerMin(3, 4) << ' '
		<< doubleMin(1.1, 3.1) << ' '
		<< charMin('t', 'g') << endl;

	return EXIT_SUCCESS;
}

// function definition
int integerMin(int a, int b) {
	return (a < b ? a : b);
}

double doubleMin(double a, double b) {
	return (a < b ? a : b);
}

char charMin(char a, char b) {
	return (a < b ? a : b);
}
