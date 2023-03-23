#include <iostream>
#include <string>
#include "ReadInput.hpp"
#include <vector>


using namespace std;



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



int main() {

	string line = ReadStrings::ReadString("Please Enter Your String ? \n");


	InvertCase(line);

	cout << line << endl;

	return 0;
}