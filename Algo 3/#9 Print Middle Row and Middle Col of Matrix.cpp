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
		for (short j = 0; j < Col; j++)
		{
			cout << setw(3) << Array[i][j] << " ";
		}
		cout << endl;
	}
}

void PrintMiddleRow(short Array[3][3], short Row, short Col) {
	short MiddleRow = ceil(Row / 2);
	for (short j = 0; j < Col; j++){
		cout << setw(3) << Array[MiddleRow][j] << " ";
	}
	cout << endl;
}
void PrintMiddleCol(short Array[3][3], short Row, short Col) {
	short MiddleCol = ceil(Col / 2);
	for (short i = 0; i < Row; i++) {
		cout << setw(3) << Array[i][MiddleCol] << " ";
	}
	cout << endl;
}


short main() {
	srand(time(NULL));
	short Array1[3][3];
	FillArray(Array1,3,3);

	cout << "The Following is a 3X3 Array: " << endl;
	PrintArray(Array1,3,3);
	cout << "The Following is the Middle row of Array: " << endl;
	PrintMiddleRow(Array1, 3, 3);
	cout << "The Following is the Middle Col of Array: " << endl;
	PrintMiddleCol(Array1, 3, 3);

	return 0;
}

