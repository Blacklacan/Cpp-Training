#include <iostream>
#include "ReadInput.hpp"
#include <string>
#include <vector>
#include <cstring>
using namespace std;
string lowerCaseString(string word);

// Match Case
vector <string> ReplaceWords(string userString, string find, string replace) {
	vector <string> vString;
	short pos = 0;
	string word;
	while ((pos = userString.find(" ")) != std::string::npos)
	{
		if (userString[pos] == ' ')
		{
			word = userString.substr(0, pos);
			if (word != find){
				vString.push_back(word);
			}
			if (word == find) {
				vString.push_back(replace);
			}
		}
		userString.erase(0, pos + 1);
		pos++;
	}
	if (userString != "") {
		if (userString != find)
			vString.push_back(userString);
		if (userString == find)
			vString.push_back(replace);

	}

	return vString;
}

// Match Case is not required
vector <string> ReplaceWordsNoMatch(string userString, string find, string replace) {
	vector <string> vString;
	short pos = 0;
	
	string word;
	while ((pos = userString.find(" ")) != std::string::npos)
	{
		if (userString[pos] == ' ')
		{
			word = userString.substr(0, pos);
			if (lowerCaseString(word) != lowerCaseString(find)) {
				vString.push_back(word);
			}
			if (lowerCaseString(word) == lowerCaseString(find)) {
				vString.push_back(replace);
			}
		}
		userString.erase(0, pos + 1);
		pos++;
	}
	if (userString != "") {
		if (lowerCaseString(userString) != lowerCaseString(find))
			vString.push_back(userString);
		if (lowerCaseString(userString) == lowerCaseString(find))
			vString.push_back(replace);

	}

	return vString;
}

string lowerCaseString(string word) {
	string loweredword;
	for (short i = 0; i < word.length(); i++)
	{
		char lowered = tolower(word[i]);
		loweredword += lowered;
	}
	return loweredword;
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
	bool sensitivty;
	cout << "is it case sensitve? y/N " << endl;
	char answer;
	cin >> answer;
	if (tolower(answer) == 'y')
	{
		cout << "Case Sensitive: " << endl;
		vector <string> vString = ReplaceWords(enteredString, find, replace);
		PrintVector(vString);
		cout << endl;
	}
	else {
		cout << "Case Insensitive: " << endl;
		vector <string> sString = ReplaceWordsNoMatch(enteredString, find, replace);
		PrintVector(sString);
		cout << endl;
	}
	


}