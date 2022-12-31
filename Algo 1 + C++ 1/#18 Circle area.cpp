#include <iostream>
#include <cmath> 
using namespace std;

float ReadNumbers() {
	float A;
	cout << "enter x: \n" << endl;
	cin >> A;
	return A;
}

float circle(float d)
{
	const float pi = 3.14;

	float Area = (pi * pow(d, 2)) / 4;
	return Area;
}

void PrintResult(float Area) {
	cout << "circle area is : " << Area;
}

int main()
{

	PrintResult(circle(ReadNumbers()));
	return 0;
}