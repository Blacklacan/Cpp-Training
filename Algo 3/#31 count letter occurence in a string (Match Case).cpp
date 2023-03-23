#include <iostream>
#include <string>
#include "ReadInput.hpp"
#include <vector>


using namespace std;



short CountLetterInString(string& str, char letter, bool MatchCase = true) {
	short count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (MatchCase)
		{
			if (str[i] == letter)
			{
				count++;
			}
		}
		else
		{
			
			if (str[i] == toupper(letter) || str[i] == tolower(letter))
			{
				count++;
			}
		}
	}
	return count;
}



int main() {

	string line = ReadStrings::ReadString("Please Enter Your String ? \n");
	char letter = ReadStrings::ReadLetter("Please Enter Your Letter ? \n");

	short count = CountLetterInString(line, letter,1);


	cout << "count of letter " << letter << " is:"<< endl;
	cout << count << endl;
	return 0;
}