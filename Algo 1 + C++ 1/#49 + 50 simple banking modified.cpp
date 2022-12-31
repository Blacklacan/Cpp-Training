#include <iostream>
using namespace std;
int ReadPin() {
	cout << "Enter your Password: \n";
	int Input_Password;
	cin >> Input_Password;
	return Input_Password;
}
struct Account
{
	int Balance;
	int True_Password;
	string Name;
};
void Validate_Password(int Input_Password, Account Customer_account)
{
	int counter = 3;
	int True_Password = Customer_account.True_Password;
	int Balance = Customer_account.Balance;
	while (counter > 0)
	{
		if (Input_Password == True_Password)
		{
			cout << "Welcome Mr/Ms " << Customer_account.Name << '\n';
			cout << "Your balance is " << Balance << '$';
			system("Color 2F");
			break;
		}
		else
		{
			counter --;
			if (counter <= 0)
			{
				cout << "You are locked out. Please Call the bank on +962061222333 or visit one of our branches." << endl;
				break;
			}
			else
			{
				system("Color 4F");
				cout << "Wrong Password, you have " << counter << " tries left. \n" << "Enter your Password again : " << endl;
				cin >> Input_Password;
			}

		}
	}
}


int main(){
	Account MyAccount;
	MyAccount.True_Password = 9876;
	MyAccount.Balance = 12212;
	MyAccount.Name = "Ali Ahmad";
	Validate_Password(ReadPin(), MyAccount);
	return 0;
}