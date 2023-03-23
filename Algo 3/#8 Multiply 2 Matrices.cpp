#include <iostream>
#include <iomanip>
#include <string>
#include "Random.hpp"
using namespace std;

void FillArray(short Array[3][3]) {
	for (short i = 0; i <= 2; i++) {
		for (short j = 0; j <= 2; j++){
			Array[i][j] = Random::RandomNumber(1,10);
		}
	}
}

void Multiply2Array(short Array[3][3], short Array2[3][3], short MultiArray[3][3]) {
	for (short i = 0; i <= 2; i++) {
		for (short j = 0; j <= 2; j++) {
			MultiArray[i][j] = Array[i][j] * Array2[i][j];
		}
	}
}


void PrintArray(short Array[3][3]) {
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
	short Array1[3][3];
	short Array2[3][3];
	short MultiArray[3][3];
	FillArray(Array1);
	FillArray(Array2);
	Multiply2Array(Array1, Array2, MultiArray);

	cout << "The Following is the first 3X3 Array: " << endl;
	PrintArray(Array1);
	cout << "The Following is the second version of Array: " << endl;
	PrintArray(Array2);
	cout << "The Following is the Multiply version of 2 Arrays: " << endl;
	PrintArray(MultiArray);

	return 0;
}

