#include <iostream>
using namespace std;

void Swapii(int &Num1, int &Num2)
{
	int temp;
	temp = Num1;
	Num1 = Num2;
	Num2 = temp;
	cout << Num1 << " and " << Num2 << '\n';
}

int main()
{
	int x, y;
	cout << "enter x,y: \n" << endl;
	cin >> x;
	cin >> y;
	Swapii(x,y);
	cout << x << " " << y;
	return 0;
}