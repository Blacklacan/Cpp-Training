#include <iostream>
using namespace std;


int sumuntil_99()
{
	int sum = 0;
	int x;
	cout << "enter x\n";
	cin >> x;
	while (x != -99)
	{
		sum += x;
		cout << "enter an another number: \n";
		cin >> x;

	}
	return sum;

}

int main()
{
	cout << sumuntil_99();
	return 0;
}