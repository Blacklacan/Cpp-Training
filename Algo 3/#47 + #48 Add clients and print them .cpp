#include <iostream>
#include "ReadInput.hpp"
#include <string>
#include <vector>
#include <fstream>
using namespace std;


struct Client
{
	string AccountID;
	string PinCode;
	string FullName;
	string Phone;
	string AccountBalance;
	string parseRecord;
};

void PrintCustomerInfo(Client NewClient) {
	cout << "Full Name: " << NewClient.FullName << endl;
	cout << "Phone: " << NewClient.Phone << endl;
	cout << "Account ID: " << NewClient.AccountID << endl;
	cout << "Pin Code: " << NewClient.PinCode << endl;
	cout << "Account Balance: " << NewClient.AccountBalance << endl;
}
void CustomerInfoToClientClass(vector <string> vExistingClient, Client& NewClient) {
	NewClient.AccountID = vExistingClient[0];
	NewClient.PinCode = vExistingClient[1];
	NewClient.FullName = vExistingClient[2];
	NewClient.Phone = vExistingClient[3];
	NewClient.AccountBalance = vExistingClient[4];
}
string AccountRecordParse(Client& newClient) {
	newClient.parseRecord =
		newClient.AccountID + "#//#" +
		newClient.PinCode + "#//#" +
		newClient.FullName + "#//#" +
		newClient.Phone + "#//#" +
		newClient.AccountBalance + "#//#";
	 return newClient.parseRecord;
}
void ReadNewClient(Client& NewClient){
	NewClient.AccountID = ReadStrings::ReadStringNoSpaces("Please Enter your account ID:");
	NewClient.PinCode = ReadStrings::ReadStringNoSpaces("Please Enter your Pin Code:");
	NewClient.FullName = ReadStrings::ReadString("Please Enter your Full name:");
	NewClient.Phone = ReadStrings::ReadString("Please Enter your Phone Number:");
	NewClient.AccountBalance = ReadStrings::ReadStringNoSpaces("Please Enter your balance:");
}
vector <string> ReadClientRecordVector(string Record, string delimiter = "#//#") {
	vector <string> vExistingClient;
	while (Record != "")
	{
		int pos = Record.find(delimiter);
		vExistingClient.push_back(Record.substr(0, pos));
		Record.erase(0, pos + delimiter.length());
	}
	return vExistingClient;
	
}


void start() {
	fstream ClientData;
	string ClientRecord;
	ClientData.open("Client_Data.ini", ios::out | ios::app);
	char dataEntry = 'y';
	do
	{
		Client NewClient;
		ReadNewClient(NewClient);
		cout << "Saving...Please Wait" << endl;
		ClientRecord = AccountRecordParse(NewClient);
		ClientData << ClientRecord << endl;
		cout << "Record Saved Successfuly, do you want to add new clients? \n";
		cin >> dataEntry;
		system("CLS");
	} while (dataEntry == 'y' || dataEntry == 'Y');

	char doPrint;
	cout << "Do you want to print Customer Data? y/n \n";
	cin >> doPrint;
	system("CLS");

	if (doPrint == 'y' || doPrint == 'Y')
	{
		cout << "Client Info:" << endl;
		ClientData.close();
		ClientData.open("Client_Data.ini", ios::in);
		if (ClientData.is_open())
		{
			string Line;
			while (getline(ClientData, Line))
			{
				Client ReadClient;
				vector <string> vClientRecord = ReadClientRecordVector(Line);
				CustomerInfoToClientClass(vClientRecord, ReadClient);
				PrintCustomerInfo(ReadClient);
			}
			ClientData.close();

		}
	}

}




int main() {

	start();

	return 0;


}