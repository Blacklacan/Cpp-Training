#include <iostream>
#include "ReadInput.hpp"
#include <string>
#include <vector>

using namespace std;

vector <string> AllWords(string userString) {
	vector <string> vString;
	short pos = 0;
	string word;
	while ((pos = userString.find(" ")) != std::string::npos)
	{
		if (userString[pos] == ' ')
		{
			word = userString.substr(0, pos);
			vString.push_back(word);
			
		}
		userString.erase(0, pos + 1);
		pos++;
	}
	if (userString != "")
		vString.push_back(userString);

	return vString;
}


void PrintVectorBackwards(vector <string> Strings) {
	for (int i = Strings.size()-1; i >= 0; i--){
		cout << Strings[i] << " ";
	}
}

int main() {
	string enteredString = ReadStrings::ReadString("Please Enter your string: \n");
	vector <string> vString = AllWords(enteredString);
	PrintVectorBackwards(vString);

}