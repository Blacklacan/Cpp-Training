#include <iostream>

using namespace std;



void ReadArrayData(float x[3])
{
	cout << "entrer grade 1: \n";
	cin >> x[0];

	cout << "enter grade 2: \n";
	cin >> x[1];

	cout << "enter grade 3: \n";
	cin >> x[2];
}

float CalAverage(float x[3])
{
 
	return (x[0] + x[1] + x[2]) / 3;
}

void PrintArrayData(float x[3])
{
	cout << "\n*********************\n";
	cout << "the averages of the grades is: " << CalAverage(x[3]);
	cout << "\n*********************\n";
}

int main()
{
	float x[3];
	ReadArrayData(x);
	PrintArrayData(x);

	cout << "\a";
}

