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

int SumMatrix(short Array[3][3]) {
	int sum = 0;
	for (short i = 0; i <=2 ; i++) {
		for (short j = 0; j <=	2 ; j++) {	
			sum += Array[i][j];
		}
	}
	return sum;
}


short main() {
	srand(time(NULL));
	short Array1[3][3];
	FillArray(Array1,3,3);

	cout << "The Following is a 3X3 Array: " << endl;
	PrintArray(Array1,3,3);
	cout << "The Following is the sum Array: ";
	cout << SumMatrix(Array1);

	return 0;
}

