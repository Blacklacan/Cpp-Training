#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string message) {
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

void PrintInvertedPattren() {

	string word = "";
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int q = 65; q <= 90; q++)
			{
				word += i;
				word += j;
				word += q;

				cout << word << endl;
				word = "";
				
			}
		}
		cout << "_______________________________________" << '\n';
	}
}

int main() {
	PrintInvertedPattren();
}

