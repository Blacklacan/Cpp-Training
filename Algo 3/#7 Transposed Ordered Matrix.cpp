#include <iostream>
#include <iomanip>
#include <string>
#include "Random.hpp"
using namespace std;

void FillArray(short Array[3][3]) {
	short counter = 0;
	for (short i = 0; i <= 2; i++) {
		for (short j = 0; j <= 2; j++)
		{
			counter++;
			Array[i][j] = counter;

		}
	}
}

void TransposeArray(short Array[3][3], short TransposedArray[3][3]) {
	for (short i = 0; i <= 2; i++) {
		for (short j = 0; j <= 2; j++) {

			TransposedArray[i][j] = Array[j][i];

		}
	}
}


void PrintArray(short Array[3][3]) {
	for (short i = 0; i <= 2; i++) {
		for (short j = 0; j <= 2; j++){
			cout << setw(3) << Array[i][j] << " ";
		}
		cout << endl;
	}
}


short main() {
	srand(time(NULL));
	short TwoDimensionalArray[3][3];
	short TransposedArray[3][3];
	FillArray(TwoDimensionalArray);
	cout << "The Following is a 3X3 Array: " << endl;
	PrintArray(TwoDimensionalArray);
	cout << "The Following is the transposed version of Array: " << endl;
	TransposeArray(TwoDimensionalArray, TransposedArray);
	PrintArray(TransposedArray);

	return 0;
}

