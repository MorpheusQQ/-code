// 2.3 Templates
// pp. 90-91
// function template

#include <cstdlib>
#include <iostream>

using namespace std;

// function prototype
template <typename T> T genericMin(T a, T b);
// The keyword "typename" could be replaced by "class".

int main() {
	cout << genericMin(3, 4) << ' '			// = genericMin<int>(3, 4)
		<< genericMin(1.1, 3.1) << ' '		// = genericMin<double>(1.1, 3.1)
		<< genericMin('t', 'g') << endl;	// = genericMin<char>('t', 'g')

	return EXIT_SUCCESS;
}

// function definition
template <typename T> T genericMin(T a, T b) {
	return (a < b ? a : b);
}
