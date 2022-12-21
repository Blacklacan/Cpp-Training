#include <iostream>

using namespace std;


int main()
{
	int PassWord;
	int Balance = 4900;
	cout << "Enter your Password: \n";
	cin >> PassWord;
	int counter = 0;
	while (counter < 3)
	{
		if (PassWord == 1234)
		{
			cout << "Your Balance is: " << Balance << endl;
			break;
		}
		else
		{
			counter += 1;
			if (counter == 3)
			{
				cout << "You are locked out. bye" << endl;
				break;
			}
			else
			{
				cout << "Wrong Password" << endl;
				cout << "Enter your Password again: " << endl;
				cin >> PassWord;
			}
		}

	}
}