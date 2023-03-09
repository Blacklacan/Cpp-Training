#pragma once
#include <iostream>
using namespace std;

namespace ReadNumbers {

	int ReadNumber(string Message, string ErrorMessage) {
		int Number;
		cout << Message << endl;
		cin >> Number;
		while (cin.fail()) {
			// user didn't input a number
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << ErrorMessage << endl;
			cin >> Number;
		}
		return Number;
	}



	int ReadPositiveNumber(string message) {
		int Number = 0;
		do
		{
			cout << message << endl;
			cin >> Number;

		} while (Number <= 0);

		return Number;
	}
}