#include <iostream>
#include <string>
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

void PrintNumberPattren(int Number) {
	for (int i = 1; i <= Number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << '\n';
	}
}

int main() {
	PrintNumberPattren(ReadPositiveNumber("enter the number: "));
}

