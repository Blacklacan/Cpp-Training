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
void PrintSumofDigits(int Number)
{
	int sum = 0;
	float Remainder = 0;
	cout << "The sum of " << Number << " digits is : " << endl;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		sum += Remainder;
	}
	cout << sum << endl;
	// best suited when there is zeros on the left compared to my solution
}
int main()
{
	PrintSumofDigits(ReadPositiveNumber("Please enter a positive number ? "));
	return 0;
}