#include <iostream>
#include <string>

using namespace std;

#pragma once
class ClsAddress
{
private:
	string _Name;
	uint16_t _Age;
	int _Balance;
	uint16_t _Payroll;
	string _Address;
public:
	ClsAddress(string Name, uint16_t Age, int Balance, uint16_t Payroll, string Address) {
		_Name = Name;
		_Age = Age;
		_Balance = Balance;
		_Payroll = Payroll;
		_Address = Address;
	}
	void setName(string Name) {
		_Name = Name;
	}
	string getName() {
		return _Name;
	}
	__declspec(property(put = setName,  get = getName)) string Name;

	void setAge(uint16_t Age) {
		_Age = Age;
	}
	uint16_t getAge() {
		return _Age;
	}
	__declspec(property(put = setAge, get = getAge)) uint16_t Age;

	void setBalance(int Balance) {
		_Balance = Balance;
	}
	int getBalance() {
		return _Balance;
	}
	__declspec(property(put = setBalance, get = getBalance)) int Balance;


	void setPayroll(uint16_t Payroll) {
		_Payroll = Payroll;
	}
	uint16_t getPayroll() {
		return _Payroll;
	}
	__declspec(property(put = setPayroll, get = getPayroll)) uint16_t Payroll;

	void setAddress(string Address) {
		_Address = Address;
	}
	string getAddress() {
		return _Address;
	}
	__declspec(property(put = setAddress, get = getAddress)) string Address;

	void Print() {
		cout << "Personal Card \n";
		cout << "------------------" << endl;
		cout << "Name:" << Name << endl;
		cout << "Age:" << Age << endl;
		cout << "Balance:" << Balance << endl;
		cout << "Payroll:" << Payroll << endl;
		cout << "Address:" << Address << endl;
	}
};

