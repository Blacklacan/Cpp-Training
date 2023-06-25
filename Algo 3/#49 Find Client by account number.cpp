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

void VectorToClient(vector <string> vRecord, Client& customer) {
	customer.AccountID = vRecord[0];
	customer.PinCode = vRecord[1];
	customer.FullName = vRecord[2];
	customer.Phone = vRecord[3];
	customer.AccountBalance = vRecord[4];

}


void start() {
	fstream ClientData;
	string ClientRecord;

	string AccountNumber;
	cout << "Which Customer Number do you want to show?\n";
	cin >> AccountNumber;
	system("CLS");

	cout << "Client Info:" << endl;
	ClientData.open("Client_Data.ini", ios::in);
	if (ClientData.is_open())
	{

		string Line;
		while (getline(ClientData, Line))
		{
			Client ReadClient;
			int pos = Line.find("#//#");
			if (Line.substr(0, pos) == AccountNumber)
			{
				vector <string> vClientRecord = ReadClientRecordVector(Line);
				VectorToClient(vClientRecord, ReadClient);
				PrintCustomerInfo(ReadClient);
			}
			
		}
		ClientData.close();

	}
}






int main() {

	start();

	return 0;


}