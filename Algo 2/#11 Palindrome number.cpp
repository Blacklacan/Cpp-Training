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

int ReverseNumber(int Number) {
	float Remainder = 0, Number2 = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}


string CheckifPalindrome(int Number, int ReverseNumber) {
	return (Number == ReverseNumber) ? "Yes its a palindrome" : "No, Its not a palinmdrome";
}
int main()
{
	int N = ReadPositiveNumber("Enter the number you want to check if palindrome");
	int ReverseN = ReverseNumber(N);
	cout << CheckifPalindrome(N, ReverseN);
	return 0;
}