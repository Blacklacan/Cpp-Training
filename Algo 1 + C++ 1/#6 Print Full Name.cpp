#include <string>
#include<iostream>
using namespace std;

struct stInfo
{
	string FirstName;
	string LastName;
	string FullName;
};

string PersonFullName(stInfo person) {
	 return person.FullName = person.FirstName + " " + person.LastName;
}
void PrintFullName(string Fullname) {
	cout << Fullname;
}

stInfo ReadInfo(stInfo Person) {
	
	cout << "Please enter your first name: \n";
	cin >> Person.FirstName;
	cout << "Please enter your last name: \n";
	cin >> Person.LastName;
	return Person;
}


int main() {
	stInfo Person1;
	PrintFullName(PersonFullName(ReadInfo(Person1)));
	return 0;
}