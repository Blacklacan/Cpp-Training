#include <iostream>
#include <string>
using namespace std;


string ReadPassword(string message) {
	string Test = "";
	cout << message << endl;
	getline(cin, Test);
	return Test;
}

string Encryption(string Password, int Key) {
	for (int i = 0; i < Password.length(); i++) {
		Password[i] = char((int)Password[i] + Key);
	}
	return Password;
}

string Decrypt(string Encryotion, int Key) {
	for (int i = 0; i < Encryotion.length(); i++)
	{
		Encryotion[i] = char((int)Encryotion[i] - Key);
	}
	return Encryotion;
}

int main() {
	string Password = ReadPassword("Enter Password: ");
	int Encryption_Key = 6;
	string encro = Encryption(Password, Encryption_Key);
	cout << encro << endl;

	cout << "after decryption: \n";
	cout << Decrypt(encro, Encryption_Key);
}

