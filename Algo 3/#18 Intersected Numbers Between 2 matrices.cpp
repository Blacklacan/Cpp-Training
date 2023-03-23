#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
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
bool FindNumber(short Array1[3][3], short Number, short Row, short Col) {
	for (short i = 0; i < Row; i++) {
		for (short j = 0; j < Col; j++) {
			if (Array1[i][j] == Number) {
				return true;
			}
		}
	}
	return false;
}
//void IntersectedMatrix(short Array1[3][3], short Array2[3][3], vector <short>& InterSected,  short Row, short Col) {
//	int Number;
//	for (short i = 0; i < Row; i++) {
//		for (short j = 0; j < Col; j++) {
//			Number = Array1[i][j];
//			if (FindNumber(Array2,Number,3,3)){
//				InterSected.push_back(Array1[i][j]);
//			}
//		}
//	}
//}
void IntersectedMatrix(short Array1[3][3], short Array2[3][3],  short Row, short Col) {
	int Number;
	for (short i = 0; i < Row; i++) {
		for (short j = 0; j < Col; j++) {
			Number = Array1[i][j];
			if (FindNumber(Array2,Number,3,3)){
				cout << Number << " ";
			}
		}
	}
}

//void PrintIntersectedVector(vector <short> Intersected) {
//	cout << "The IntersectedMatrix is" << endl;
//	for (auto & element: Intersected ){
//		cout << element << " ";
//	}
//
//}

int main() {
	srand(time(NULL));
	short Array1[3][3], Array2[3][3];
	/*vector <short> intersectedMatrix;*/
	// Fill Arrays
	FillArray(Array1,3,3);
	FillArray(Array2,3,3);
	// Print Arrays
	cout << "The First Matrix: " << endl;
	PrintArray(Array1, 3, 3);
	cout << "The Second Matrix: " << endl;
	PrintArray(Array2, 3, 3);
	IntersectedMatrix(Array1, Array2, 3, 3);

	//// Fill Intersected Vector
	//IntersectedMatrix(Array1, Array2, intersectedMatrix, 3, 3);
	//// Print Intersected
	//PrintIntersectedVector(intersectedMatrix);

	return 0;
}

