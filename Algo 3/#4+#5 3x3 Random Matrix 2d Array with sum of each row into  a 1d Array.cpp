#include <iostream>
#include <iomanip>
#include <string>
#include "Random.hpp"
using namespace std;

void FillArray(short Array[3][3]) {
	for (short i = 0; i <= 2; i++) {
		for (short j = 0; j <= 2; j++)
		{
			Array[i][j] = Random::RandomNumber(1, 100);
		}
	}
}

void SumRowsIntoArray(short Array[3][3], short SumOfRows[3]) {
	
	for (short i = 0; i <= 2; i++) {
		int sum = 0;
		for (short j = 0; j <= 2; j++){
			
			sum += Array[i][j];
			
		}
		
		cout << "Sum of Row [" << i+1<< "] = " << sum << endl;
		SumOfRows[i] = sum;
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
void PrintSumArray(short Array[3]) {
	cout << "The sum array is: " << endl;
	for (short i = 0; i <= 2; i++) 
		cout << setw(3) << Array[i] << " ";
	
}

short main() {
	srand(time(NULL));
	short TwoDimensionalArray[3][3];
	short SumOfRows[3];
	FillArray(TwoDimensionalArray);
	cout << "The Following is a random 3X3 Array: " << endl;
	PrintArray(TwoDimensionalArray);
	cout << "The Following is rows sum: " << endl;
	SumRowsIntoArray(TwoDimensionalArray, SumOfRows);
	PrintSumArray(SumOfRows);

	return 0;
}

