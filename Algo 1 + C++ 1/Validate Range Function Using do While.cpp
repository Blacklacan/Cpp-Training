#include <string>
#include<iostream>
using namespace std;


int ReadIntFromRange(int Lower, int Upper) {
	int Number;

	do
	{
		cout << "enter a number between " << Lower << " and " << Upper << ": \n";
		cin >> Number;

	} while (Number < Lower || Number > Upper);


	return Number;
}

int main() {
	int min = 18;
	int max = 60;
	cout << "You are of legal age as you are " << ReadIntFromRange(18, 60) << " years old, welcome."; ;
}