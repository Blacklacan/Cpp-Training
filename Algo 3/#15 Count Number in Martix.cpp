#include <iostream>
#include <iomanip>
#include <string>
#include "Random.hpp"
#include "ReadInput.hpp"
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

int CountNumber(short Array1[3][3], int CountedNubmer, short Row, short Col) {
	int counter = 0;
	for (short i = 0; i < Row; i++) {
		for (short j = 0; j < Col; j++) {
			if (Array1[i][j] == CountedNubmer) {
				counter += 1;
			}
				
		}
	}
	return counter;
}

void PrintCounter(int count, short number) {
	cout << "The Count of " << number << " is :" << count;
}

short main() {
	srand(time(NULL));
	short Array1[3][3];
	FillArray(Array1,3,3);
	short Number = ReadNumbers::ReadNumber("What is the number you want to read?", "Invalid number, try again");
	cout << "The Matrix: " << endl;
	PrintArray(Array1, 3, 3);
	short count = CountNumber(Array1, Number, 3, 3);
	PrintCounter(count, Number);
	return 0;
}

