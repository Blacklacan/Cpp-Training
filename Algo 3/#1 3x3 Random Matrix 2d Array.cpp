#include <iostream>
#include <iomanip>
#include <string>
#include "Random.hpp"
using namespace std;

void FillArray(short Array[3][3]) {
	for (short i = 0; i <= 2; i++) {
		for (short j = 0; j <= 2; j++)
		{
			Array[i][j] = Random::RandomNumber(1, 100);
		}
	}
}

void PrshortArray(short Array[3][3]) {
	for (short i = 0; i <= 2; i++) {
		for (short j = 0; j <= 2; j++)
		{
			cout << setw(3) << Array[i][j] << " ";
		}
		cout << endl;
	}
}

short main() {
	srand(time(NULL));
	short TwoDimensionalArray[3][3];
	FillArray(TwoDimensionalArray);
	cout << "The Following is a random 3X3 Array: " << endl;
	PrshortArray(TwoDimensionalArray);

	return 0;
}

