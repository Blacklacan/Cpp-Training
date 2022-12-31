#include <string>
#include<iostream>
using namespace std;


int main()
{
	for (int i = 10; i <= 0; i++)
	{

		for (int j = 65; j <= i; j++)
		{
			cout << j;
		}
		cout << '\n';
	}
}