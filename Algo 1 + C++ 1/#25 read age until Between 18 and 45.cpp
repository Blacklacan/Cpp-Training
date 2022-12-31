#include <iostream>
using namespace std;

int ReadAge() {
	int Age;
	cout << "Please enter your age: \n";
	cin >> Age;
	return Age;
}

bool ValidateAge(int Age, int From, int To) {
	return (Age >= From && Age <= To);
}

int ReadAgeUntilBetween(int From, int To) {
	int Age = 0;

	do
	{
		Age = ReadAge();

	} while (!ValidateAge(Age, From, To));

	return Age;
}

void PrintValidity(bool Check) {
	if (Check != 0)
		cout << "You Are Welcome as you are";
	else
		cout << "Denied";
}



int main() {
	PrintValidity(ReadAgeUntilBetween(20, 45));
}