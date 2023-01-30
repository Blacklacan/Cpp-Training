#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float ReadNumber(string message) {
	float N = 0;
	cout << message;
	cin >> N;
	return N;
}


float GetFraction(float number) {
	return number - int(number);
}

int MyRound(float Number) {
	int intPart;
	intPart = int(Number);
	if (abs(GetFraction(Number)) >= 0.5)
		++intPart;
	else
		--intPart;
	
	return intPart;
}
int main() {
	float N = ReadNumber("enter the number you want to round:");
	cout << "Using my round function: " << MyRound(N) <<endl ;
	cout << "Using C++ round function: " << round(N) << endl;


	
}