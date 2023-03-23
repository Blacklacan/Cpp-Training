#include <iostream>
#include <string>
#include "ReadInput.hpp"
#include <vector>


using namespace std;

void SplitWordsInStringToVector(string str, string delimter, vector <string> EachWord) {
	string delim = delimter;
	short pos = 0;
	string sWord;

	while ((pos = str.find(delim)) != std::string::npos)
	{
		sWord = str.substr(0, pos);
		if (sWord != "")
		{
			EachWord.push_back(sWord);
		}
		str.erase(0, pos + delim.length());
	}
	if (str != "")
	{
		EachWord.push_back(str)
	}
}

void PrintVector(vector <string> EachWord) {
	for (auto& element : EachWord)
	{
		cout << element << endl;
	}
}



int main() {

	string str = ReadStrings::ReadString("Please Enter Your String?\n");
	vector <string> EachWord;
	WordsInString(str, " ", EachWord);
	PrintVector(EachWord);
	return 0;
}