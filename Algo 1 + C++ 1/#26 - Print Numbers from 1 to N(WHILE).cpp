#include <string>
#include<iostream>
using namespace std;


void whilo(int n) {

	int i = 1;
	while (i <= n)
	{
		cout << i <<endl;
		i++;
	}
}

int main() {
	cout << "please enter N: \n";
	int n;
	cin >> n;
	whilo(n);
}