#include <iostream>
#include <iomanip>
#include <string>
#include "Random.hpp"
#include "ReadInput.hpp"
#include "ArrayLib.hpp"
using namespace std;

void FillArray(short Array[3][3], short Row, short Col) {
	for (short i = 0; i < Row; i++) {
		for (short j = 0; j < Col; j++){
			Array[i][j] = Random::RandomNumber(0,100);
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
void CopyArray(short arr[3][3], short arr2[3][3], short Row, short Col) {
	short Rowcounter = 0;
	
	for (int i = 0; i < Row; i++) {
		short Colcounter = 0;
		for (short j = Col - 1; j >= 0; j--)
		{
			arr2[i][j] = arr[Rowcounter][Colcounter];
			Colcounter++;
		}
		Rowcounter++;
	}

}

bool CheckIfPalindrome( short Array[3][3],short Array2[3][3], short Row, short Col) {
	for (short i = 0; i < Row; i++) {
		for (short j = 0; j < Col; j++) {
			if (Array[i][j] != Array2[i][j])
				return false;
		}
	}
	return true;
}

void PrintIfPalindrome(bool Result) {
	if (Result){
		cout << "Yes the array is Palindrome" << endl;
	}
	else {
		cout << "No the array is NOT Palindrome" << endl;
	}
}

int main() {
	srand(time(NULL));
	short Array1[3][3];
	short Array2[3][3];
	// Fill Arrays
	FillArray(Array1,3,3);
	//Copy Array in reverse
	CopyArray(Array1, Array2, 3, 3);
	// Print Arrays
	cout << "The  Matrix: " << endl;
	PrintArray(Array1, 3, 3);
	bool Result = CheckIfPalindrome(Array1, Array2, 3, 3);
	PrintIfPalindrome(Result);

	


	return 0;
}

