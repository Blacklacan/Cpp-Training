#include <iostream>
#include <string>
#include "ReadInput.hpp"


using namespace std;

void WordsInString(string str) {
	string delim = " ";
	cout << "Your String Words are: " << endl;
	short pos = 0;
	string sWord;

	while ((pos = str.find(delim)) != std::string::npos)
	{
		sWord = str.substr(0, pos);
		if (sWord != "")
		{
			cout << sWord << endl;
		}
		str.erase(0, pos + delim.length());
	}
	if (str != "")
	{
		cout << str << endl;
	}
}



int main() {

	string str = ReadStrings::ReadString("Please Enter Your String?\n");
	
	WordsInString(str);

	return 0;
}