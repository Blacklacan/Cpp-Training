#include <iostream>
#include <string>
#include <fstream>
#include <ReadInput.hpp>
#include <vector>
using namespace std;

enum Operations
{
	PrintClients = 1,
	AddClients = 2,
	DeleteClient = 3,
	UpdateClient = 4,
	FindClients = 5,
	Exit = 6
};

vector<string> SplitString(string S1, string Delim) {
	vector<string> vString;
	short pos = 0;
	string sWord;
	// define a string variable
	// use find() function to get the position of the delimiters
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		// store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1); // it adds last word of the string.
	}
	return vString;
}
struct stClient
{
	string AccountID;
	string Full_Name;
	string PinCode;
	string PhoneNumber;
	string AcoountBalance;
	string RecordParseID;
};

string AccountParseID(stClient& Client, string delim = "#//#") {
	Client.RecordParseID = Client.AccountID + delim
		+ Client.PinCode + delim
		+ Client.Full_Name + delim
		+ Client.PhoneNumber + delim
		+ Client.AcoountBalance;
	return Client.RecordParseID;
}


void PrintClient(stClient Client) {
	cout << "Account ID:" << Client.AccountID << endl;
	cout << "Pin Code:" << Client.PinCode << endl;
	cout << "Full Name:" << Client.Full_Name << endl;
	cout << "Phone Number:" << Client.PhoneNumber << endl;
	cout << "Acoount Balance:" << Client.AcoountBalance << endl;
}

stClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{
	stClient Client; vector<string> vClientData;
	vClientData = SplitString(Line, Seperator);
	Client.AccountID = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Full_Name = vClientData[2];
	Client.PhoneNumber = vClientData[3];
	Client.AcoountBalance = vClientData[4];
	return Client;
}


vector <stClient> LoadCleintsDataFromFile(string FileName) {
	vector <stClient> vClients;
	fstream MyFile;
	MyFile.open(FileName, ios::in);//read Mode
	if (MyFile.is_open()) {
		string Line;
		stClient Client;
		while (getline(MyFile, Line)) {
			Client = ConvertLinetoRecord(Line);
			vClients.push_back(Client);
		}
		MyFile.close();
	}
	return vClients;
}

void ReadNewClient(stClient& NewClient) {
	NewClient.AccountID = ReadStrings::ReadStringNoSpaces("Please enter your account ID: \n");
	NewClient.PinCode = ReadStrings::ReadString("Please enter your pin code: \n");
	NewClient.Full_Name = ReadStrings::ReadString("Please enter your full name: \n");
	NewClient.PhoneNumber = ReadStrings::ReadString("Please enter your phone number: \n");
	NewClient.AcoountBalance = ReadStrings::ReadString("Please enter your account balance: \n");
}
stClient ReadUpdateClient(stClient& NewClient) {
	NewClient.PinCode = ReadStrings::ReadStringNoSpaces("Please enter your pin code: \n");
	NewClient.Full_Name = ReadStrings::ReadString("Please enter your full name: \n");
	NewClient.PhoneNumber = ReadStrings::ReadString("Please enter your phone number: \n");
	NewClient.AcoountBalance = ReadStrings::ReadString("Please enter your account balance: \n");
	NewClient.RecordParseID = AccountParseID(NewClient);
	return NewClient;
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

void CustomerInfoToClientClass(vector <string> vExistingClient, stClient& NewClient) {
	NewClient.AccountID = vExistingClient[0];
	NewClient.PinCode = vExistingClient[1];
	NewClient.Full_Name = vExistingClient[2];
	NewClient.PhoneNumber = vExistingClient[3];
	NewClient.AcoountBalance = vExistingClient[4];
}

Operations endMessage(int num) {
	int type;
	cout << "Done, is there any other operation you with to performe? \n";
	cout << "PrintClients = 1 \nAddClients = 2 \nDeleteClient = 3 \nUpdateClient = 4 \nFindClients = 5 \nExit = 6\n";
	cin >> type;
	Operations operate = static_cast<Operations> (type);
	return operate;
}


void start() {
	fstream ClientData;
	cout << "What is the operation you wish to perform?\n";
	cout << "PrintClients = 1 \nAddClients = 2 \nDeleteClient = 3 \nUpdateClient = 4 \nFindClients = 5 \nExit = 6\n";
	int type;
	cin >> type;
	Operations operate = static_cast<Operations> (type);

	while (operate!= 6)
	{
		if (operate == 1)
		{
			cout << "Client Info:" << endl;
			ClientData.close();
			ClientData.open("Client_Data2.ini", ios::in);
			if (ClientData.is_open())
			{
				string Line;
				while (getline(ClientData, Line))
				{
					stClient ReadClient;
					vector <string> vClientRecord = ReadClientRecordVector(Line);
					CustomerInfoToClientClass(vClientRecord, ReadClient);
					PrintClient(ReadClient);
					cout << "_____________________" << endl;
				}
				ClientData.close();
			}
			operate = endMessage(type);
		}
		if (operate == 2)
		{
			string ClientRecord;
			ClientData.open("Client_Data2.ini", ios::out | ios::app);
			char dataEntry = 'y';
			do
			{
				stClient NewClient;
				ReadNewClient(NewClient);
				cout << "Saving...Please Wait" << endl;
				ClientRecord = AccountParseID(NewClient);
				ClientData << ClientRecord << endl;
				cout << "Record Saved Successfuly, do you want to add new clients? \n";
				cin >> dataEntry;
				system("CLS");
			} while (dataEntry == 'y' || dataEntry == 'Y');

			operate = endMessage(type);
		}
		if (operate == 3)
		{
			operate = endMessage(type);
		}
		if (operate == 4)
		{
			cout << "What is the ID you wish to update? \n";
			string ID;
			cin >> ID;
			cout << "Client Info:" << endl;
			ClientData.close();
			ClientData.open("Client_Data2.ini", ios::in);
			vector <string> vUpdatedClients;
			if (ClientData.is_open())
			{
				vector <stClient> All_Data = LoadCleintsDataFromFile("Client_Data2.ini");
				for (stClient C : All_Data)
				{
					if (C.AccountID == ID)
					{
						ReadUpdateClient(C);
						vUpdatedClients.push_back(C.RecordParseID);
						ClientData.close();
					}
				}
				ClientData.close();
			}

			ClientData.open("Client_Data2.ini", ios::out);
			if (ClientData.is_open())
			{
				for (int i = 0; i < vUpdatedClients.size() - 1; i++)
				{
					string Record = vUpdatedClients[i];
					ClientData << Record;
				}
				cout << "_____________________" << endl;
				ClientData.close();
			}
			
			operate = endMessage(type);
		}
		if (operate == 5)
		{

			cout << "What is the ID you wish to find? \n";
			string ID;
			cin >> ID;
			cout << "Client Info:" << endl;
			ClientData.close();

			ClientData.open("Client_Data2.ini", ios::in);
			if (ClientData.is_open())
			{
				string Line;
				while (getline(ClientData, Line))
				{
					stClient ReadClient;
					vector <string> vClientRecord = ReadClientRecordVector(Line);
					CustomerInfoToClientClass(vClientRecord, ReadClient);
					if (vClientRecord[0] == ID)
					{
						PrintClient(ReadClient);
						break;
					}
				}
				ClientData.close();
			}
			cout << "_____________________" << endl;

			operate = endMessage(type);

		}
	}

}





int main() {
	start();
	return 0;
}