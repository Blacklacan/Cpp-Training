#include <iostream>
#include <cmath> 
using namespace std;

float circle(float d)
{
	const float pi = 3.14;

	float Area = (pi * pow(d, 2))/4;
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