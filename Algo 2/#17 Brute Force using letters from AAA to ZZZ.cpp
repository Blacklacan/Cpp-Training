#include <iostream>
#include <string>
using namespace std;


string ReadPassword(string message) {
	string Test = "";
	cout << message << endl;
	cin >> Test;
	return Test;
}

bool BruteForcePassword(string testpassword) {

	string word = "";
	int trail = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int q = 65; q <= 90; q++)
			{
				word += i;
				word += j;
				word += q;
				trail += 1;
				cout << word << endl;
				if (word == testpassword) {
					cout << word << " is the password, found successfully.";
					cout << " found after " << trail << " tries." << '\n';
					return true;
				}
				word = "";
				
			}
		}
		cout << "_______________________________________" << '\n';
	}
}

int main() {
	BruteForcePassword(ReadPassword("What is the true password?"));
}

