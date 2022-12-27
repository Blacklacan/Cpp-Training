#include <string>
#include<iostream>
using namespace std;


void whilo(int n) {

	int counter = 1;
	int sum = 0;
	while (counter <= n)
	{
		if (counter % 2 == 0)
		{
			sum += counter;
		}
		counter ++;
	}
	
	cout << sum << endl;
}

int main() {
	cout << "please enter N: \n";
	int n;
	cin >> n;
	whilo(n);
}