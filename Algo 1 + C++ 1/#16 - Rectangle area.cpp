#include <iostream>
#include <cmath> 
using namespace std;

void ReadNumbers(int& A, int& B) {
	cout << "enter x,y: \n" << endl;
	cin >> A;
	cin >> B;
}

double rectangu(int Num1, int Num2)
{
	int Area = Num1 * (sqrt(pow(Num2, 2) - pow(Num1, 2)));
	return Area;
}
void PrintResult(double Area) {
	cout << "The area of rectangle is: " << Area << '\n';
}

int main()
{
	int x, y;
	ReadNumbers(x, y);
	PrintResult(rectangu(x, y));
	return 0;
}