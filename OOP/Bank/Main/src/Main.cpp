#include <iostream>
#include "clsBankClient.hpp"
#include "ClsInputValidate.hpp"
#include "ClsString.hpp"
#include "fstream"
using namespace std;

void ReadClientUI(clsBankClient& Client) {
	cout << "Enter First Name: " << Client.FirstName << '\n';
	cout << "Enter Last Name: " << Client.LastName << '\n';
	cout << "Enter Phone Number: " << Client.Phone << '\n';
}

void UpdateClient()
{
    string AccountNumber = "";

    cout << "\nPlease Enter client Account Number: ";
    AccountNumber = ClsInputValidate::ReadString();

    while (!clsBankClient::IsClientExist(AccountNumber))
    {
        cout << "\nAccount number is not found, choose another one: ";
        AccountNumber = ClsInputValidate::ReadString();
    }

    clsBankClient Client1 = clsBankClient::Find(AccountNumber);
    Client1.Print();

    cout << "\n\nUpdate Client Info:";
    cout << "\n____________________\n";


    ReadClientUI(Client1);

    clsBankClient::enSaveResults SaveResult;

    SaveResult = Client1.Save();

    switch (SaveResult)
    {
    case  clsBankClient::enSaveResults::svSucceeded:
    {
        cout << "\nAccount Updated Successfully :-)\n";
        Client1.Print();
        break;
    }
    case clsBankClient::enSaveResults::svFaildEmptyObject:
    {
        cout << "\nError account was not saved because it's Empty";
        break;

    }

    }
}

int main() {
    UpdateClient();
    return 0;
}