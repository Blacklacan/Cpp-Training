#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int ReadNumber(string message) {
	int N = 0;
	cout << message;
	cin >> N;
	return N;
}


int MyAbs(int Number) {
	if (Number > 0)
		return Number;
	if (Number < 0)
		return Number * -1;
	
}
int main() {
	int N = ReadNumber("enter the number you want abs:");
	cout << "Using my ABS function: " << MyAbs(N) <<endl ;
	cout << "Using C++ ABS function: " << abs(N) << endl;


	
}