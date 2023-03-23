#include <iostream>
#include <string>
#include "ReadInput.hpp"

using namespace std;

void PrintFiboUsingLoop(int Number) {
	int FebNumber = 0;
	int Prev2 = 0, Prev1 = 1;
	cout << Prev1 << " ";
	for (short i = 2; i <= Number; ++i){
		FebNumber = Prev2 + Prev1;
		cout << FebNumber << " ";
		Prev2 = Prev1;
		Prev1 = FebNumber;
	}

}

int main() {

	PrintFiboUsingLoop(10);


	return 0;
}

