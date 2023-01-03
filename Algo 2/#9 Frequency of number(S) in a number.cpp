#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int ReadFrequencyPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}


int FrequencySearch(int Number, short Frequency) {
	float Remainder = 0;
	int count = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		if (Remainder == Frequency)
			count++;
		Number = Number / 10;
	}
	return count;
}

void PrintAllDigitsFrequency(int Number)
{
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		int digitFrequency = 0;
		digitFrequency = FrequencySearch(Number, i);
		if (digitFrequency > 0)
		{
			cout << "Digit " << i << " Frequency is: " << digitFrequency << endl;
		}


	}

}
int main()
{
	int Number = ReadPositiveNumber("Enter the number: ");
	PrintAllDigitsFrequency(Number);
	return 0;
}