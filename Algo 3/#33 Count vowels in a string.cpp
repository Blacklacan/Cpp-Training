#include <iostream>
#include <string>
#include "ReadInput.hpp"
#include <vector>


using namespace std;

bool isVowel(char letter) {
	short count = 0;
	vector <char> List = { 'a', 'e','i', 'u' , 'o' };
	for (char item : List)
	{
		if (tolower(letter) == item)
			return true;
	}
	return false;
}

void CountVowel(string str) {
	short count = 0;
	for (short i = 0; i <str.length(); i++)
	{
		if (isVowel(tolower(str[i])))
			count++;
			
	}
	cout << "You have " << count << " Vowels" << endl;

}



int main() {

	string str = ReadStrings::ReadString("Please Enter Your String?\n");
	CountVowel(str);
	

	return 0;
}