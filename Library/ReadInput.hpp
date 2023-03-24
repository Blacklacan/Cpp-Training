#pragma once
#include <iostream>
#include <string>
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

namespace ReadStrings {
	string  ReadString(string Message)
	{ 
		string S1;
		cout << Message;
		getline(cin, S1);
		return S1;
	}
	char  ReadLetter(string Message)
	{
		char letter;
		cout << Message;
		cin >> letter;
		return letter;
	}

	void InvertCase(string& str) {

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ' && isupper(str[i]))
			{
				str[i] = tolower(str[i]);
			}
			else if (str[i] != ' ' && islower(str[i]))
			{
				str[i] = toupper(str[i]);
			}
		}
	}
}


