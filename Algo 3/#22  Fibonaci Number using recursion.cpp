#include <iostream>
#include <string>
#include "ReadInput.hpp"

using namespace std;

void PrintFiboUsingRecursion(int Number, int Prev1, int Prev2) {
	int FebNumber = 0;
	while (Number > 0)
	{
		FebNumber = Prev2 + Prev1;
		Prev2 = Prev1;
		Prev1 = FebNumber;
		cout << FebNumber << " ";
		PrintFiboUsingRecursion(Number-1, Prev1, Prev2);
	}

}

int main() {

	PrintFiboUsingRecursion(10, 0,1);


	return 0;
}

