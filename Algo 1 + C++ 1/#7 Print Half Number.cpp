#include <string>
#include<iostream>
using namespace std;

int ReadNumber() {
	int Number;
	cout << "Please enter your number: \n";
	cin >> Number;
	return Number;
}

double HalfNumber(int n) {
	return (double) n * 0.5;
}

void PrintHalfNumber(int n) {
	cout << "The half of " + to_string(n) + " is: \n";
	cout << HalfNumber(n);
}


int main() {
	PrintHalfNumber(ReadNumber());
	return 0;
}