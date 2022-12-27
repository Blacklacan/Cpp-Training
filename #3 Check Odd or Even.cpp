#include <string>
#include<iostream>
using namespace std;

enum enNumberType
{
	Odd = 1, Even = 2
};
int ReadNumber() {
	int Number;
	cout << "Please enter your number: \n";
	cin >> Number;
	return Number;
}
enNumberType Check_Odd_or_Even(int Number) {
	return enNumberType(Number % 2 == 0);
}
void PrintNumberType(int Number) {
	if (Check_Odd_or_Even(Number) == 1)
	{
		cout << Number << " is " << enNumberType::Even;
	}
	else
	{
		cout << Number << " is " << enNumberType::Odd;
	}
}

int main() {
	PrintNumberType(ReadNumber());
	return 0;
}