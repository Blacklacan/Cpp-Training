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
	for (int i = Number.length(); i > 0; i--)
	{
		cout << i ;
	}

}

int main() {

	PrintNumString(NumberToString(ReadN("Enter the number you want to be reversed: ")));
	return 0;
}