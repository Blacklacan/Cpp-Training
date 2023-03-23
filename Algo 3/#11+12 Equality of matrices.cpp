#include <iostream>
#include <iomanip>
#include <string>
#include "Random.hpp"
using namespace std;

void FillArray(short Array[3][3], short Row, short Col) {
	for (short i = 0; i < Row; i++) {
		for (short j = 0; j < Col; j++){
			Array[i][j] = Random::RandomNumber(1,10);
		}
	}
}

void PrintArray(short Array[3][3], short Row, short Col) {
	for (short i = 0; i < Row; i++) {
		for (short j = 0; j < Col; j++){
			cout << setw(3) << Array[i][j] << " ";
		}
		cout << endl;
	}
}

bool EqualMatrices(short Array1[3][3], short Array2[3][3], short Row, short Col) {
	for (short i = 0; i < Row; i++) {
		for (short j = 0; j < Col; j++) {
			if (Array1[i][j] != Array2[i][j])
				return false;
		}
	}
	return true;
}

void PrintEquilty(bool result) {
	if (result)
		cout << "Yes the 2 matrcis are equal" << endl;
	else
		cout << "No the 2 matrcis are NOT equal" ;
}

short main() {
	srand(time(NULL));
	short Array1[3][3];
	short Array2[3][3];
	FillArray(Array1,3,3);
	FillArray(Array2, 3, 3);

	cout << "First Matrix: " << endl;
	PrintArray(Array1, 3, 3);
	cout << "Second Matrix: " << endl;
	PrintArray(Array2, 3, 3);
	cout << "Compare two matrices equailty: " << endl;
	PrintEquilty(EqualMatrices(Array1, Array2, 3, 3));
	return 0;
}

