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

void PrintValidity(bool Check) {
	if (Check != 0)
		cout << "You Are Welcome";
	else
		cout << "Denied";
}



int main() {
	PrintValidity(ValidateAge(ReadAge(), 16, 45));
}