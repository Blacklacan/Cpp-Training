#include <iostream>
#include "ReadInput.hpp"
#include <string>
#include <vector>
#include <cctype>
using namespace std;

vector <string> ReplaceWords(string userString, string find, string replace) {
	vector <string> vString;
	short pos = 0;
	string lowered = tolower(userString);
	string word;
	while ((pos = userString.find(" ")) != std::string::npos)
	{
		if (userString[pos] == ' ')
		{
			word = userString.substr(0, pos));
			if (word != find){
				vString.push_back(word);
			}
			if (word == find) {
				vString.push_back(replace);
			}
		}
		lowered.erase(0, pos + 1);
		pos++;
	}
	if (lowered != "") {
		if (word != find)
			vString.push_back(userString);
		if (word == find)
			vString.push_back(replace);

	}

	return vString;
}


void PrintVector(vector <string> Strings) {
	for (auto& element: Strings)
	{
		cout << element << " ";
	}
}

int main() {
	string enteredString = ReadStrings::ReadString("Please Enter your string: \n");
	string find = ReadStrings::ReadString("Please Enter the word you want to find in the string: \n");
	string replace = ReadStrings::ReadString("Please Enter the word you want to replace the old word with in the string: \n");
	vector <string> vString = ReplaceWords(enteredString,find, replace);
	PrintVector(vString);

}