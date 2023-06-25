#pragma once
#include <iostream>
#include <vector>
using namespace std;
class ClsString
{
private:
	string _Value;
	int16_t _CharceterCount;
	int16_t _Length;
public:
	ClsString( string Value) {
		this -> _Value = Value;
	}
	ClsString() {
		this->_Value = "";
	}

	void setValue(string Value) {
		this->_Value = Value;
	}

	string getValue() {
		return this->_Value;
	}

	__declspec(property(get = getValue, put = setValue)) string Value;

	static int16_t CountCharecters(string Value) {
		int16_t count = 0;
		for (char i: Value)
		{
			if (i != ' ')
			{
				count++;
			}
			
		}
		return count;
	}
	int16_t CountCharecters() {
		_CharceterCount = CountCharecters(_Value);
		return _CharceterCount;
	}

	static int16_t Length(string Value) {
		int16_t count = 0;
		for (char i : Value)
		{
			count++;
		}
		return count;
	}
	int16_t Length() {
		_Length = Length(_Value);
		return _Length;
	}

	static void CapitalFirstLetter(string& str) {
		bool IsFirstLetter = true;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ' && IsFirstLetter)
			{
				str[i] = toupper(str[i]);
			}
			IsFirstLetter = (str[i] == ' ') ? true : false;
		}
	}
	void CapitalFirstLetter() {
		CapitalFirstLetter(_Value);
	}

	static void AllUpper(string& str) {
		for (int16_t i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ')
			{
				str[i] = toupper(str[i]);
			}
			
		}
	}
	void AllUpper() {
		AllUpper(_Value);
	}

	static void AllLower(string& str) {
		for (int16_t i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ')
			{
				str[i] = tolower(str[i]);
			}
		}
	}
	void AllLower() {
		AllLower(_Value);
	}

	static vector <string> Split(string S1, string Delim)
	{

		vector<string> vString;

		short pos = 0;
		string sWord; // define a string variable  

		// use find() function to get the position of the delimiters  
		while ((pos = S1.find(Delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos); // store the word   
			if (sWord != "")
			{
				vString.push_back(sWord);
			}

			S1.erase(0, pos + Delim.length());  /* erase() until positon and move to next word. */
		}

		if (S1 != "")
		{
			vString.push_back(S1); // it adds last word of the string.
		}

		return vString;

	}


};

