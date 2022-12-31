#include<iostream>
using namespace std;

void ReadNumber(int& Number1, int& Number2, int& Number3) {
	cout << "Please enter number 1: ";
	cin >> Number1;
	cout << "Please enter number 2: ";
	cin >> Number2;
	cout << "Please enter number 3: ";
	cin >> Number3;
}

int Sum_Of_3_Numbers(int Number1, int Number2, int Number3) {
	return Number1 + Number2 + Number3;
}
float CalCulateAverage(int Number1, int Number2, int Number3) {
	return (float) Sum_Of_3_Numbers(int Number1, int Number2, int Number3) /3
}

void PrintResult(float average) {
	cout << "The average is: " << average;
}


int main() {

	int N1, N2, N3;
	ReadNumber(N1, N2, N3);
	PrintResult(CalCulateAverage(N1, N2, N3));
	return 0;
}