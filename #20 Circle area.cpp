#include <iostream>
#include <cmath> 
using namespace std;

float circle(float A)
{
	const float pi = 3.14;

	float Area = (pi * (pow(A, 2) / 4));
	return Area;
}

int main()
{
	float x;
	cout << "enter x: \n" << endl;
	cin >> x;
	cout << "circle area is : " << circle(x);
	return 0;
}