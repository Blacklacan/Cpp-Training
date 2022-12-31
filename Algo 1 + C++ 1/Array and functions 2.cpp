#include <iostream>
using namespace std;


struct stPerson
{
	string FirstName;
	string SecondName;
	string Adress;
	string PhoneNumber;
	int Age;

};

void ReadInfo(stPerson &Person)
{
	stPerson Person;
	cout << "Enter first name: \n";
	cin >> Person.FirstName;
	cout << "Enter second name: \n";
	cin >> Person.SecondName;
	cout << "Enter adress: \n";
	cin >> Person.Adress;
	cout << "Enter phone number: \n";
	cin >> Person.PhoneNumber;
	cout << "Enter age: \n";
	cin >> Person.Age;

}

void PrintInfo(stPerson Person)
{
	cout << "\n**********************\n";
	cout << "First name: " << Person.FirstName;
	cout << "Second name: " << Person.SecondName;
	cout << "Adress: " << Person.Adress;
	cout << "Phone number: " << Person.PhoneNumber;
	cout << "Age: " << Person.Age;
	cout << "\n**********************\n";
}


void ReadPersonsInfo(stPerson Person[2])
{
	ReadInfo(Person[0]);
	ReadInfo(Person[1]);
}
void PrintPersonsInfo(stPerson Person[2])
{
	PrintInfo(Person[0]);
	PrintInfo(Person[1]);
}


int main ()
{
	stPerson Persons[2];

	ReadPersonsInfo(Persons);
	PrintPersonsInfo(Persons);

	return 0;
