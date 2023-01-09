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

void PrintInvertedPattren(int Number) {
	for (int i = 65 + Number - 1; i >= 65; i--)
	{
		for (int j = 1; j <= Number - (65 + Number -1 -i); j++)
		{
			cout <<(char)i;
		}
		cout << '\n';
	}
}

int main() {
	PrintInvertedPattren(ReadPositiveNumber("enter the number: "));
}

