#include <iostream>
#include "ReadInput.hpp"
#include <string>
#include <vector>
using namespace std;
struct Client
{
	string AccountID;
	uint16_t PinCode;
	string FullName;
	string Phone;
	uint32_t AccountBalance;
	string parseRecord;
};

string AccountRecordParse(Client& newClient) {
	newClient.parseRecord =
		newClient.AccountID + "#//#" +
		to_string(newClient.PinCode) + "#//#" +
		newClient.FullName + "#//#" +
		newClient.Phone + "#//#" +
		to_string(newClient.AccountBalance) + "#//#";
	 return newClient.parseRecord;
}



void  ReadNewClient(Client& NewClient){
	NewClient.FullName = ReadStrings::ReadString("Please Enter your Full name:");
	NewClient.Phone = ReadStrings::ReadString("Please Enter your Phone Number:");
	NewClient.AccountID = ReadStrings::ReadString("Please Enter your account ID:");
	NewClient.PinCode = ReadNumbers::ReadPositiveNumber("Please Enter your Pin Code:");
	NewClient.AccountBalance = ReadNumbers::ReadPositiveNumber("Please Enter your balance:");
}


vector <string> ReadClientRecordVector(string Record, string delimiter) {
	vector <string> vExistingClient;
	while (Record != "")
	{
		int pos = Record.find(delimiter);
		vExistingClient.push_back(Record.substr(0, pos));
		Record.erase(0, pos + delimiter.length());
	}
	return vExistingClient;
	
}

void CustomerInfoToClientClass(vector <string> vExistingClient, Client& NewClient) {
	NewClient.AccountID = vExistingClient[0];
	NewClient.PinCode = stoi(vExistingClient[1]);
	NewClient.FullName = vExistingClient[2];
	NewClient.Phone = vExistingClient[3];
	NewClient.AccountBalance = stoi(vExistingClient[4]);
}

void PrintCustomerInfo(Client NewClient) {
	cout << "Full Name: " << NewClient.FullName << endl;
	cout << "Phone: " << NewClient.Phone << endl;
	cout << "Account ID: " << NewClient.AccountID << endl;
	cout << "Pin Code: " << NewClient.PinCode << endl;
	cout << "Account Balance: " << NewClient.AccountBalance << endl;
}
int main() {
	Client NewClient;
	ReadNewClient(NewClient);
	cout << "Parse Record:" << endl;
	string ClientRecord =  AccountRecordParse(NewClient);
	cout << ClientRecord << endl;
	system("pause>0");
	system("CLS");

	// ReadRecord
	string delim = "#//#";
	vector <string> vClientRecord = ReadClientRecordVector(ClientRecord, delim);
	CustomerInfoToClientClass(vClientRecord, NewClient);
	PrintCustomerInfo(NewClient);

	return 1;


}