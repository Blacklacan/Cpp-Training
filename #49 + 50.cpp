#include <iostream>
using namespace std;


void Validate_Password()
{

	int Balance = 4900;
	cout << "Enter your Password: \n";
	int Input_Password;
	cin >> Input_Password;
	int counter = 0;

	int True_Password = 9876;


	while (counter < 3)
	{
		if (Input_Password == True_Password)
		{
			cout << "Your balance is " << Balance << '$';
			break;
		}
		else
		{
			counter += 1;
			if (counter >= 3)
			{
				cout << "You are locked out. bye" << endl;
				break;
			}
			else
			{
				cout << "Wrong Password, enter your Password again: " << endl;
				cin >> Input_Password;
			}

		}
	}
}


int main(){
	Validate_Password();
	return 0;
}