#include <iostream>
using namespace std;

int rectangu(int Num1, int Num2)
{
	return Num1 * Num2;
}

int main()
{
	int x, y;
	cout << "enter x,y: \n" << endl;
	cin >> x;
	cin >> y;
	cout << "rectan area is : " <<rectangu(x,y);
	return 0;
}