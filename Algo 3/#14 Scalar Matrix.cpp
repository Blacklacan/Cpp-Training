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

bool IdenticalMatrices(short Array1[3][3],short Row, short Col) {
	int FirstDigit = Array1[0][0];
	for (short i = 0; i < Row; i++) {
		for (short j = 0; j < Col; j++) {
			if (i == j && Array1[i][j] != FirstDigit)
				return false;
			if (i != j && Array1[i][j] != 0)
				return false;
		}
	}
	return true;
}

void PrintIdenticals(bool result) {
	if (result)
		cout << "Yes the matrix is Scalar" << endl;
	else
		cout << "No the matrix is not Scalar" << endl;
}

short main() {
	srand(time(NULL));
	short Array1[3][3] = { {9,0,0},{0,9,0},{0,0,9} };
	//FillArray(Array1,3,3);
	cout << "First Matrix: " << endl;
	PrintArray(Array1, 3, 3);
	cout << "Compare two matrices Scalrity: " << endl;
	PrintIdenticals(IdenticalMatrices(Array1, 3, 3));
	return 0;
}

