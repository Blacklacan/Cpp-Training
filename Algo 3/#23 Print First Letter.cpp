#include <iostream>
#include <string>
#include "ReadInput.hpp"
#include <vector>
using namespace std;



void PrintFirstLetter(string str) {
	bool IsFirstLetter = true;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ' && IsFirstLetter)
		{
			cout << str[i] << endl;
		}
		IsFirstLetter = (str[i] == ' ' ? true : false);
	}
}



int main() {

	string line = ReadStrings::ReadString("Please Enter Your String ? \n");


	PrintFirstLetter(line);

	return 0;
}

