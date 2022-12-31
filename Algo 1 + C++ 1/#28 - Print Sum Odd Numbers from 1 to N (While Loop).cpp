
#include<iostream>
using namespace std;


int ReadN() {
	cout << "please enter N: \n";
	int n;
	cin >> n;
	return n;
}

void whilo(int n) {

	int counter = 1;
	int sum = 0;
	while (counter <= n)
	{
		if (counter % 2 != 0)
		{
			sum += counter;
		}
		counter++;
	}

	cout << sum << endl;
}

int main() {

	whilo(ReadN());
}