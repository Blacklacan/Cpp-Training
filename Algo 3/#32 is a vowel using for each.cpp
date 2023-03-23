#include <iostream>
#include <string>
#include "ReadInput.hpp"
#include <vector>


using namespace std;



void isVowel(char letter) {
	short count = 0;
	vector <char> List = { 'a', 'e','i', 'u' , 'o' };
	for (char item : List)
	{
		if (tolower(letter) == item)
		{
			cout << "Yes the letter " << letter << " is a vowel" << endl;
			break;
		}
			
		else 
		{
			cout << "No the letter " << letter << " is NOT a vowel" << endl;
			break;
		}
			
	}

}



int main() {

	char letter = ReadStrings::ReadLetter("Please Enter Your Letter?\n");

	isVowel(letter);

	return 0;
}