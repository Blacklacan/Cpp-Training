#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <fstream>
using namespace std;


void PrintFileContenet(std::string FileName) {
	std::fstream MyFile;
	MyFile.open(FileName, std::ios::in);

	if (MyFile.is_open())
	{
		std::string Line;
		while (getline(MyFile, Line)) {
			cout << Line << endl;
		}
		MyFile.close();
	}
}

int main() {
	fstream Log;
	Log.open("Log.ini", ios::out | ios::app);
	std::string name = "Ali";
	Log << "String Content:" << name << endl;
	for (int i = 0; i < name.length(); i++)
	{
		cout << name[i] << endl;
		cout << "Lower Case: ";
		if (islower(name[i]))
			cout << "True" << endl;
		else
			cout << "False" << endl;

		cout << "Upper Case: ";
		if (isupper(name[i]))
			cout << "True" << endl;
		else 
			cout << "False" << endl;
			name[i] = toupper(name[i]);
		

		
	}
	Log << "String after convertion to upper case: " << name << endl;
	Log.close();

	PrintFileContenet("Log.ini");

	return 0;
}

