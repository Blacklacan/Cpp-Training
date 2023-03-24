#include <iostream>
#include <string>
#include "ReadInput.hpp"
#include <vector>
using namespace std;




string JoinString(vector <string> vStrings, string seperator)
{
	string AllWords;
	for (auto& element : vStrings) {
		AllWords += element + seperator;
	}
	return AllWords.substr(0, AllWords.size()- seperator.size());
}

int CountCharecterWithoutSpaces(string stringToCount) {
	int count = 0;
	for (char& charecter : stringToCount) {
		if (charecter != ' ')
		{
			count++;
		}
	}
	return count;
}

int main() {

	vector <string> vStrings = { "Ali", "Amjad", "Khader" };

	string AllWords = JoinString(vStrings, ",");
	cout << AllWords << endl;

	cout << "Charecter Count:" << endl;
	cout << CountCharecterWithoutSpaces(AllWords);

	return 0;
}