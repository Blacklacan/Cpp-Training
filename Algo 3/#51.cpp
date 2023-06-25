#include<iostream>
#include<fstream>
#include<string>
#include "ReadInput.hpp"
#include<vector>
#include<iomanip>

using namespace std;

const string ClientsFileName = "Client_Data.ini";

struct sClient{ 
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	string AccountBalance;
	string parseRecord;
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

void ReadNewClient(sClient& NewClient) {
	NewClient.AccountNumber = ReadStrings::ReadStringNoSpaces("Please Enter your account ID:");
	NewClient.PinCode = ReadStrings::ReadStringNoSpaces("Please Enter your Pin Code:");
	NewClient.Name = ReadStrings::ReadString("Please Enter your Full name:");
	NewClient.Phone = ReadStrings::ReadString("Please Enter your Phone Number:");
	NewClient.AccountBalance = ReadStrings::ReadStringNoSpaces("Please Enter your balance:");
}
string AccountRecordParse(sClient& newClient) {
	newClient.parseRecord =
		newClient.AccountNumber + "#//#" +
		newClient.PinCode + "#//#" +
		newClient.Name + "#//#" +
		newClient.Phone + "#//#" +
		newClient.AccountBalance + "#//#";
	return newClient.parseRecord;
}
sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{
	sClient Client; vector<string> vClientData;
	vClientData = SplitString(Line, Seperator);
	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = vClientData[4];
	//cast string to double
	return Client;
} 
vector <sClient> LoadCleintsDataFromFile(string FileName){
	vector <sClient> vClients;
	fstream MyFile;
	MyFile.open(FileName, ios::in);//read Mode
	if (MyFile.is_open()){ 
		string Line;
		sClient Client;
		while (getline(MyFile, Line)){
			Client = ConvertLinetoRecord(Line);
			vClients.push_back(Client);
			} 
		MyFile.close();
	}
 return vClients;	
} 
void PrintClientCard(sClient Client){ 
	cout << "\nThe following are the client details:\n";
	cout << "\nAccout Number: " << Client.AccountNumber;
	cout << "\nPin Code     : " << Client.PinCode;
	cout << "\nName         : " << Client.Name;
	cout << "\nPhone        : " << Client.Phone;
	cout << "\nAccount Balance: " << Client.AccountBalance;
}

bool FindClientByAccountNumber(string AccountNumber, sClient & Client) {
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	for (sClient C : vClients) {
		if (C.AccountNumber == AccountNumber) {
			Client = C;
			return true;
		} 
	}
	return false;
}
void DeleteClient(string AccountNumber, sClient & Client) {
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	vector <string> vUpdatedClients;
	for (sClient C : vClients) {
		if (C.AccountNumber != AccountNumber) {
			vUpdatedClients.push_back(AccountRecordParse(C));
		}
		if (C.AccountNumber == AccountNumber)
		{
			ReadNewClient(C);
			vUpdatedClients.push_back(AccountRecordParse(C));
		}
	}
	fstream MyFile;
	MyFile.open(ClientsFileName, ios::out);
		for (int i = 0; i < vUpdatedClients.size()-1; i++)
		{
			string Record = vUpdatedClients[i];
			MyFile << Record;
		}
}
string ReadClientAccountNumber() {
	string AccountNumber = "";
	cout << "\nPlease enter AccountNumber? ";
	cin >> AccountNumber;
	return AccountNumber;
}
int main() {
	sClient Client; string AccountNumber = ReadClientAccountNumber();
	if (FindClientByAccountNumber(AccountNumber, Client)) {
		PrintClientCard(Client);
		char answer;
		cout << "\nDo you want to update this account?" << endl;
		cin >> answer;
		answer = tolower(answer);
		if (answer == 'y')
		{
			DeleteClient(AccountNumber, Client);
			cout << "\nSuccesfully Deleted " << endl;
			
		}
	}
	else {
		cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
	} 
	system("pause>0");
	return 0;
}