
#include <iostream>
#include <string>

using namespace std;
using std::cout;
using std::string;
using std::cin;



int mysumfunction(int u, int z)
{
	return u + z;
	
}

int main() 
{
	int Num1, Num2;
	cout << "enter Num1 and Num2: \n";
	cin >> Num1;
	cin >> Num2;
	cout << '\n' << mysumfunction(Num1, Num2);
	return 0;
}