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

float GetFraction(float Number) {
	return Number - int(Number);
}

int MyCeil(float Number) {
	if (abs(GetFraction(Number) > 0))
		if (Number > 0) 
			return int(Number) + 1;
		else 
			return int(Number);
	else 
		return Number;
}
int main() {
	float N = ReadNumber("enter the number you want to ceil:");
	cout << "Using my ceil function: " << MyCeil(N) <<endl ;
	cout << "Using C++ ceil function: " << ceil(N) << endl;


	
}