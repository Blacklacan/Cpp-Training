#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "clsPerson.hpp"
#include "ClsString.hpp"

class clsBankClient : public clsPerson
{
private:
	enum enMode {EmptyMode = 0, UpdateMode =1};
	enMode _Mode;


	string _AccountNumber;
	string _PinCode;
	float _AccountBalance;
	

	static clsBankClient _ConvertLinetoClientObject(string Line, string Seperator = "#//#")
	{
		vector<string> vClientData;
		vClientData = ClsString::Split(Line, Seperator);

		return clsBankClient(enMode::UpdateMode, vClientData[0], vClientData[1], vClientData[2],
			vClientData[3], vClientData[4], vClientData[5], stod(vClientData[6]));

	}

	static string _ConverClientObjectToLine(clsBankClient Client, string Seperator = "#//#")
	{

		string stClientRecord = "";
		stClientRecord += Client.FirstName + Seperator;
		stClientRecord += Client.LastName + Seperator;
		stClientRecord += Client.Email + Seperator;
		stClientRecord += Client.Phone + Seperator;
		stClientRecord += Client.AccountNumber() + Seperator;
		stClientRecord += Client.PinCode + Seperator;
		stClientRecord += to_string(Client.AccountBalance);

		return stClientRecord;

	}

	static  vector <clsBankClient> _LoadClientsDataFromFile()
	{

		vector <clsBankClient> vClients;

		fstream MyFile;
		MyFile.open("Clients.txt", ios::in);//read Mode

		if (MyFile.is_open())
		{

			string Line;


			while (getline(MyFile, Line))
			{

				clsBankClient Client = _ConvertLinetoClientObject(Line);

				vClients.push_back(Client);
			}

			MyFile.close();

		}

		return vClients;

	}

	static void _SaveCleintsDataToFile(vector <clsBankClient> vClients)
	{

		fstream MyFile;
		MyFile.open("Clients.txt", ios::out);//overwrite

		string DataLine;

		if (MyFile.is_open())
		{

			for (clsBankClient C : vClients)
			{
				DataLine = _ConverClientObjectToLine(C);
				MyFile << DataLine << endl;

			}

			MyFile.close();

		}

	}

	void _Update()
	{
		vector <clsBankClient> _vClients;
		_vClients = _LoadClientsDataFromFile();

		for (clsBankClient& C : _vClients)
		{
			if (C.AccountNumber() == AccountNumber())
			{
				C = *this;
				break;
			}

		}

		_SaveCleintsDataToFile(_vClients);

	}

	void _AddDataLineToFile(string  stDataLine)
	{
		fstream MyFile;
		MyFile.open("Clients.txt", ios::out | ios::app);

		if (MyFile.is_open())
		{

			MyFile << stDataLine << endl;

			MyFile.close();
		}

	}
	static clsBankClient _GetEmptyClientObject()
	{
		return clsBankClient(enMode::EmptyMode, "", "", "", "", "", "", 0);
	}

public:

	clsBankClient(enMode Mode, string FirstName, string LastName, string Email, string Phone, string AccountNumber, string PinCode, float AccountBalance) :
		clsPerson(FirstName, LastName, Email, Phone) {

		_Mode = Mode;
		_AccountNumber = AccountNumber;
		_PinCode = PinCode;
		_AccountBalance = AccountBalance;
		
	}

	bool IsEmpty() {
		return (_Mode == enMode::EmptyMode);
	}

	string AccountNumber() {
		return _AccountNumber;
	}

	void setPinCode(string PinCode) {
		_PinCode = PinCode;
	}
	string getPinCode() {
		return _PinCode;
	}
	__declspec (property(get = getPinCode, put = setPinCode)) string PinCode;

	void setAccountBalance(float AccountBalance) {
		_AccountBalance = AccountBalance;
	}
	float getAccountBalance() {
		return _AccountBalance;
	}
	__declspec(property(get = getAccountBalance, put = setAccountBalance)) float AccountBalance;

	void Print() {
		cout << "\nClient Card:";
		cout << "\n_________________";
		cout << "\nFull Name: " << FullName();
		cout << "\nEmail: " << Email;
		cout << "\nPhone: " << Phone;
		cout << "\nAccount Number: " << AccountNumber();
		cout << "\nPassword: " << PinCode;
		cout << "\nBalance: " << AccountBalance;
		cout << "\n___________________" << endl;
	}

	static clsBankClient Find(string AccountNumber, string PinCode) {
		vector <clsBankClient> vClients;

		fstream MyFile;
		MyFile.open("../Clients.txt", ios::in); //Read Mode
			if (MyFile.is_open())
			{
				string Line;
				while (getline(MyFile,Line))
				{
					clsBankClient Client = _ConvertLinetoClientObject(Line);
					if (Client.AccountNumber()== AccountNumber)
					{
						if (Client.PinCode == PinCode)
						{
							MyFile.close();
							return Client;
						}
						else {
							return _GetEmptyClientObject();
						}
						vClients.push_back(Client);
					}
				}
				MyFile.close();
			}
			return _GetEmptyClientObject();
	}
	static clsBankClient Find(string AccountNumber) {
		vector <clsBankClient> vClients;

		fstream MyFile;
		MyFile.open("../Clients.txt", ios::in); //Read Mode
		if (MyFile.is_open())
		{
			string Line;
			while (getline(MyFile, Line))
			{
				clsBankClient Client = _ConvertLinetoClientObject(Line);
				if (Client.AccountNumber() == AccountNumber)
				{
					MyFile.close();
					return Client;
				}
				vClients.push_back(Client);
			}
			MyFile.close();
		}
		return _GetEmptyClientObject();
	}
	static bool IsClientExist(string AccountNumber)
	{
		clsBankClient Client1 = Find(AccountNumber);
		return (!Client1.IsEmpty());
	}

	enum enSaveResults { svFaildEmptyObject = 0, svSucceeded = 1 };

	enSaveResults Save()
	{

		switch (_Mode)
		{
		case enMode::EmptyMode:
		{

			return enSaveResults::svFaildEmptyObject;
		}

		case enMode::UpdateMode:
		{


			_Update();

			return enSaveResults::svSucceeded;

			break;
		}


		}



	}
};

