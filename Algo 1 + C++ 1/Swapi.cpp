#include <iostream>
using namespace std;


void ReadNumber(int& Num1, int& Num2) {

	cout << "enter Number1: " << endl;
	cin >> Num1;
	cout << "enter Number2: " << endl;
	cin >> Num2;
}
void Swap(int& Num1, int& Num2)
{
	int temp;
	temp = Num1;
	Num1 = Num2;
	Num2 = temp;
}
void PrintNumbers(int Num1, int Num2) {
	cout << "Number 1: " << Num1 << '\n';
	cout << "Number 2: " << Num2 << '\n';
}

int main()
{
	int Num1, Num2;
	ReadNumber(Num1, Num2);
	PrintNumbers(Num1, Num2);
	Swap(Num1, Num2);
	PrintNumbers(Num1, Num2);
	return 0;
}