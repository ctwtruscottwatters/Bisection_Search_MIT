// Bisection Search for Cube and Square Roots
// Charles Thomas Wallace Truscott
// Extra-curricular study complementing MIT 6.001
// C++ in Visual Studio 2019


#include <iostream>
#include <string>
#include <vector>

void print_cube_root();
void print_square_root();

int main()
{

	print_cube_root();
	print_square_root();
}

void print_cube_root(void) {
	int cube = 2481;
	int numGuesses = 0;
	long double high = cube;
	long double low = 0;
	long double guess = ((high + low) / 2.0);
	while (((guess * guess * guess) != cube)) {
		std::cout << "High: " << high << " Low: " << low << " Guess: " << guess << std::endl;
		if (((guess * guess * guess) > cube)) {
			high = guess;
			guess = ((high + low) / 2.0);

		}
		else if ((guess * guess * guess) < cube) {
			low = guess;
			guess = ((high + low) / 2.0);
		}
	}
	std::cout << guess << " is apparently the cube root of " << cube << std::endl;

}

void print_square_root(void) {

	int numGuesses = 0;
	int square = 99;
	long double high = square;
	long double low = 0;
	long double guess = (high + low) / 2.0;
	long double e = 0.0001;
		while ((guess * guess) != square) {
			std::cout << "High: " << high << " Low: " << low << " Guess: " << guess << std::endl;
			if ((guess * guess) > square) {
				high = guess;
				guess = (high + low) / 2.0;
			}
			else if ((guess * guess) < square) {
				low = guess;
				guess = (high + low) / 2.0;
			}

	}
	std::cout << guess << " is apparently the square root of " << square << " at " << guess * guess << std::endl;
}
