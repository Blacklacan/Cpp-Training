#include <string>
#include<iostream>
using namespace std;


int ReadN (string Message) {
	cout << Message << endl;
	int n;
	cin >> n;
	return n;
}


int ReadPositiveNumber(string message) {
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;

	} while (Number <=0);

	return Number;
}

