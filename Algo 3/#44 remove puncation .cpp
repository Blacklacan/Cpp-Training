#include <iostream>
#include "ReadInput.hpp"
#include <string>
#include <vector>
#include <cstring>
using namespace std;



string removePancations(string word) {
	string loweredword;
	for (short i = 0; i < word.length(); i++)
	{
		char charecter = word[i];
		if ((charecter >= 33 && charecter <= 47 )||
			(charecter >= 58 && charecter <= 64) ||
			(charecter >= 91 && charecter <= 96) ||
			(charecter >= 123 && charecter <= 126))
		{
			word.erase(i,1);
		}
	}
	return word;
}
string removePancationsBuiltinFunctionBuiltIN(string word) {
	string loweredword;
	for (short i = 0; i < word.length(); i++)
	{
		char charecter = word[i];
		if (ispunct(charecter))
		{
			word.erase(i, 1);
		}
	}
	return word;
}

int main() {
	string enteredString = ReadStrings::ReadString("Please Enter the word you want to remove punctions from: \n");
	cout << "Without Punctions: " << endl;
	string nopunc = removePancations(enteredString);
	cout << nopunc << endl;
	cout << "Built IN Without Punctions: " << endl;
	string nopunca = removePancationsBuiltinFunctionBuiltIN(enteredString);
	cout << nopunca << endl;

	


}