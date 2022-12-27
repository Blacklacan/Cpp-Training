#include <string>
#include<iostream>
using namespace std;


void whilo(int n) {

	int counter = 1;
	int sum = 1;
	while (counter <= n)
	{

		sum *= counter;

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