#include <iostream>
#include <iomanip>
#include <string>
#include "Random.hpp"
#include "ReadInput.hpp"
using namespace std;

void FillArray(short Array[3][3], short Row, short Col) {
	for (short i = 0; i < Row; i++) {
		for (short j = 0; j < Col; j++){
			Array[i][j] = Random::RandomNumber(0,10);
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
bool FindNumber(short Array1[3][3], short Number, short& col_position, short& row_position,  short Row, short Col) {
	for (short i = 0; i < Row; i++) {
		for (short j = 0; j < Col; j++) {
			if (Array1[i][j] == Number) {
				col_position = i;
				row_position = j;
				return true;
			}
				
		}
	}
	return false;
}

void CheckForNumber(bool Exist, short Number, short col_position , short row_position){
	if (Exist){
		cout << "Yes, " << Number << " exist in the matrix at index [" << col_position << "]["<< row_position << "]"<< endl;
	}
	else {
		cout << "No, " << Number << " doesnt exist in the matrix" << endl;
	}
}

int main() {
	srand(time(NULL));
	short Array1[3][3];
	short col_position;
	short row_position;
	FillArray(Array1,3,3);
	cout << "The Matrix: " << endl;
	PrintArray(Array1, 3, 3);
	short Number = ReadNumbers::ReadNumber("What is the number you want to find?", "Invalid number, please try again.");
	bool IsNumberFound = FindNumber(Array1, Number, col_position, row_position, 3, 3);
	CheckForNumber(IsNumberFound, Number, col_position, row_position);
	return 0;
}

