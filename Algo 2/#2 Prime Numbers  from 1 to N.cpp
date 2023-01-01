#include <string>
#include<iostream>
using namespace std;

enum enPrimeNotPrime { Prime = 1, Not_Prime = 2 };

int ReadPositiveNumber(string message) {
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

enPrimeNotPrime CheckPrimeNumber(int Number) {

	int M = round(Number / 2);

	for (int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
			return enPrimeNotPrime::Not_Prime;
	}

	return enPrimeNotPrime::Prime;
}

void PrintNumberType(int Number) {

	for (int Test_Number = 1; Test_Number <= Number; Test_Number++)
	{
		if (CheckPrimeNumber(Test_Number) == enPrimeNotPrime::Prime)
			cout << Test_Number << '\n';
	}
}

int main() {
	PrintNumberType(ReadPositiveNumber("Enter your number: "));
}