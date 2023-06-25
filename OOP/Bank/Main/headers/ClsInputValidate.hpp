#pragma once
#include <iostream>
#include <string>
#include "ClsDate.hpp"
#include "ClsString.hpp"
using namespace std;

class ClsInputValidate
{
private:
	int _Number;


public:

	int getNumber() {
		return _Number;
	}
	void setNumber(int Number) {
		_Number = Number;
	}

	__declspec(property(get = getNumber, put = setNumber)) int Number;

	static bool IsNumberPositive(int Number) {
		if (Number >= 0)
		{
			return true;
		}
		else {
			return false;
		}
	}
	bool IsNumberPositive() {
		if (this -> Number >= 0)
		{
			return true;
		}
		else {
			return false;
		}
	}

	static bool IsNumberBetween(int Number, int Number1, int Number2) {
		return ((Number >= Number1) && Number <= Number2) ? true : false;
	}
	static bool IsDateBetween(clsDate date, clsDate Date1 , clsDate Date2) {

		if ((date.Year <= Date1.Year) && (date.Year >= Date2.Year))
		{
			if (date.Month <= Date1.Month && date.Month >= Date2.Month)
			{
				if (date.Day <= Date1.Day && date.Day >= Date2.Day)
				{
					return true;
				}
			}
		}
		if ((date.Year >= Date1.Year) && (date.Year <= Date2.Year))
		{
			if (date.Month >= Date1.Month && date.Month <= Date2.Month)
			{
				if (date.Day >= Date1.Day && date.Day <= Date2.Day)
				{
					return true;
				}

			}
		}
	}

	static int ReadNumber(string Message, string ErrorMessage) {
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

	static int ReadNumberBetween(string Message, string ErrorMessage, int Low, int Max ) {
		int Number;
		cout << Message << endl;
		cin >> Number;
		bool result = IsNumberBetween(Number, Low, Max);
		while (result == false)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << ErrorMessage << endl;
			cin >> Number;
			result = IsNumberBetween(Number, Low, Max);
		}
		while (cin.fail()) {
			// user didn't input a number
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << ErrorMessage << endl;
			cin >> Number;
		}

		return Number;
	}
	static string ReadString()
	{
		string  S1 = "";
		// Usage of std::ws will extract allthe whitespace character
		getline(cin >> ws, S1);
		return S1;
	}

};

