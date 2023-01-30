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


double MySQRT(int Number) {
	return pow(Number, 0.5);
}
int main() {
	int N = ReadNumber("enter the number you want to SQRT:");
	cout << "Using my sqrt function: " << MySQRT(N) << endl;
	cout << "Using C++ sqrt function: " << sqrt(N) << endl;



}