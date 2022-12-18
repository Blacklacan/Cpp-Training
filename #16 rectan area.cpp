#include <iostream>
#include <cmath> 
using namespace std;

int rectangu(int Num1, int Num2)
{
	int Area = Num1 * (sqrt(pow(Num2, 2) - pow(Num1, 2)));
	return Area;
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