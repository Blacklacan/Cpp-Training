#include <iostream>
#include <string>
#include "ReadInput.hpp"
#include <vector>


using namespace std;



void CapitalFirstLetter(string& str) {
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



int main() {

	string line = ReadStrings::ReadString("Please Enter Your String ? \n");


	CapitalFirstLetter(line);

	cout << line << endl;

	return 0;
}