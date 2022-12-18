#include <iostream>
using namespace std;

int SwapFunction(int Num1, int Num2)
{
	int temp;
	temp = Num1;
	Num1 = Num2;
	Num2 = temp;
	return Num1, Num2;
}

int main()
{
	int Num1, Num2;
	cout << SwapFunction(Num1, Num2);
	return 0;
}