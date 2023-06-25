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
	uint16_t AccountBalance;
	string parseRecord;
};

string AccountRecordParse(Client newClient) {
	Client ReadingClient = newClient;
	ReadingClient.parseRecord =
		ReadingClient.AccountID + "#//#" +
		to_string(ReadingClient.PinCode) + "#//#" +
		ReadingClient.FullName + "#//#" +
		ReadingClient.Phone + "#//#" +
		to_string(ReadingClient.AccountBalance) + "#//#";
	 return ReadingClient.parseRecord;
}



void  ReadNewClient(Client& NewClient){
	Client myclient;
	myclient.FullName = ReadStrings::ReadString("Please Enter your Full name:");
	myclient.Phone = ReadStrings::ReadString("Please Enter your Phone Number:");
	myclient.AccountID = ReadStrings::ReadString("Please Enter your account ID:");
	myclient.PinCode = ReadNumbers::ReadPositiveNumber("Please Enter your Pin Code:");
	myclient.AccountBalance = ReadNumbers::ReadPositiveNumber("Please Enter your balance:");
	NewClient = myclient;
}

int main() {
	Client NewClient;
	ReadNewClient(NewClient);
	cout << "Parse Record:" << endl;
	cout << AccountRecordParse(NewClient) << endl;

}