#include <iostream>
using namespace std;


double power(double Num, double M)
{
	double P = 1;
	int counter = 0;
	if (M == 0)
	{
		return P;
	}
	while (counter != M)
	{
		P = P * Num;
		counter++;
	}
	return P;

}

int main()
{
	int x, y;
	cout << "enter x and y \n";
	cin >> x;
	cin >> y;
	cout << power(x, y);
	return 0;
}