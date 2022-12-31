#include <iostream>
using namespace std;


void AtoZ()
{
	char x = 65;
	while (x <= 90)
	{
		cout << x << '\n';
		x++;
	}
}

int main()
{
	AtoZ();
	return 0;
}