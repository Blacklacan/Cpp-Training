#include <string>
#include<iostream>
using namespace std;

int ReadN(string Message) {
	cout << Message << endl;
	int n;
	cin >> n;
	return n;
}

string NumberToString(int Number) {
	return to_string(Number);
}

void PrintNumString(string Number) {

	cout << "The reversal of " << Number << " is: \n";
	for (int i = 1; i <= Number.length(); i++)
	{
		cout << i << endl;
	}

}

int main() {

	PrintNumString(NumberToString(ReadN("Enter the number you want to be reversed: ")));
	return 0;
}