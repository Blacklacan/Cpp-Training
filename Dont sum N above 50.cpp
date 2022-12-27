#include <string>
#include<iostream>
using namespace std;

string ReadName() {
	string Name;
	cout << "Please enter your name: \n";
	cin >> Name;
	return Name;
}

void PrintName(string Name) {
	cout << " Welcome Mr/Ms " << Name << ". \n";
}

int main() {
	PrintName(ReadName());
}