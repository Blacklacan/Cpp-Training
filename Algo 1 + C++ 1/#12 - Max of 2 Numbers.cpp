#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& Num1, int& Num2) {
	cout << "Enter Number 1: ";
	cin >> Num1;
	cout << "Enter Number 2: ";
	cin >> Num2;
}
string CheckMaxof2(int Num1, int Num2) {
	if (Num1 > Num2)
		return to_string(Num1) + " is larger than " + to_string(Num2);
	else if (Num1 < Num2)
		return to_string(Num2) + " is larger than " + to_string(Num1);
	else if (Num1 == Num2)
		return to_string(Num1) + " is equal to " + to_string(Num2);
	else
		return "invalid input";
}

void PrintMax(int Num1,  int Num2) {
	cout << CheckMaxof2(Num1, Num2);
}

int main() {
	int n1, n2;
	ReadNumbers(n1, n2);
	PrintMax(n1, n2);
}