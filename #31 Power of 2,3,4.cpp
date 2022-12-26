#include <iostream>
#include <cmath> 
using namespace std;

void power()
{
	int A;
	cout << "enter A: \n";
	cin >> A;
	cout << "to the power of 2: " << A * A << '\n';
	cout << "to the power of 3: " << A * A * A << '\n';
	cout << "to the power of 4: " << A * A * A * A << '\n';
}

int main()
{
	power();
	return 0;
}