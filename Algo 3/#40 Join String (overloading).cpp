#include <iostream>
#include "ReadInput.hpp"
#include <string>
#include <vector>

using namespace std;


string JoinString(vector <string> vString , string delimeter) {
	string AllWords;
	for (string& element : vString)
	{
		AllWords += element + delimeter;
	}
	return AllWords.substr(0, AllWords.length() - delimeter.length());
}

string JoinString(string array[100], string delimeter, uint16_t arrSize) {
	string AllWords;
	for (uint16_t i = 0; i < arrSize; i++)
	{
		AllWords += array[i] + delimeter;
	}
	return AllWords.substr(0, AllWords.length() - delimeter.length());
}

uint16_t Count(string AllWords) {
	uint16_t counter = 0;
	for (size_t i = 0; i < AllWords.length(); i++){
		if (!(AllWords[i] == ' '))
		{
			counter++;
		}
	}
	return counter;
}

int main() {
	vector <string> vString = { "ali" , "amjad", "khader" };
	string arrString[100] = { "Hasan", "Amjad", "Khader" };
	string vStringAllWords = JoinString(vString, " ");
	string arrStringAllWords = JoinString(arrString, " ", 3);

	cout << "vString: " << vStringAllWords << endl;
	cout << "Charecter Count: " << Count(vStringAllWords) << endl;
	cout << "arrString: " << arrStringAllWords << endl;
	cout << "Charecter Count: " << Count(arrStringAllWords) << endl;

	return 1;
}