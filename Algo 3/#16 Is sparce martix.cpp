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

void CountNumber(short Array1[3][3], short& Zerocounter, short& OtherCounter ,  short Row, short Col) {
	for (short i = 0; i < Row; i++) {
		for (short j = 0; j < Col; j++) {
			if (Array1[i][j] == 0)
				Zerocounter += 1;
			else 
				OtherCounter += 1;
		}
	}
}

void CheckifMatrixSparcity(short ZeroCount, short OtherCount){
	if (ZeroCount > OtherCount){
		cout << "Yes the matrix is sparce. as zero count is " << ZeroCount << " and other integars count is " << OtherCount << endl;
	}
	else {
		cout << "NO the matrix is NOT sparce. as zero count is " << ZeroCount << " and other integars count is " << OtherCount << endl;
	}
	
}

int main() {
	srand(time(NULL));
	short Array1[3][3];
	short ZeroCounter = 0;
	short OtherCounter = 0;
	FillArray(Array1,3,3);
	cout << "The Matrix: " << endl;
	PrintArray(Array1, 3, 3);
	CountNumber(Array1, ZeroCounter, OtherCounter, 3, 3);
	CheckifMatrixSparcity(ZeroCounter, OtherCounter);
	return 0;
}

