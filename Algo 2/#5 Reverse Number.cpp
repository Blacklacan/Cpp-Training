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
void PrintDigits(int Number)
{
	float Remainder = 0, Number2 = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Number
		cout << Number2 << endl;
	}
	// best suited when there is zeros on the left compared to my solution
}
int main()
{
	PrintDigits(ReadPositiveNumber("Please enter a positive number ? "));
		return 0;
}