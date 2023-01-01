#include <string>
#include<iostream>
using namespace std;

int ReadPositiveNumber(string message) {
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

bool CheckPerfect(int Number) {
	int sum = 0;
	for (int counter = 1; counter < Number; counter++)
	{
		if (Number % counter == 0)
			sum += counter;
	}

	return sum == Number;

}

void PrintNumberType(int Number) {


	if (CheckPerfect(Number))
		cout << Number << " is a perfect number" << '\n';
	else
		cout << Number << " is not a perfect number" << '\n';



}

int main() {
	PrintNumberType(ReadPositiveNumber("Enter your number: "));
}