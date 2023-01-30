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


int MyFloor(float Number) {
	int intPart;
	intPart = int(Number);
	if (intPart < 0)
	{
		--intPart;
	}

	return intPart;

}
int main() {
	float N = ReadNumber("enter the number you want to floor:");
	cout << "Using my floor function: " << MyFloor(N) <<endl ;
	cout << "Using C++ floor function: " << floor(N) << endl;


	
}