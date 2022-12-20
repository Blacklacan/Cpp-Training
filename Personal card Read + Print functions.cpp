#include <iostream>

using namespace std;


// Info
struct stInfo
{
	string FirstName, SecondName, PhoneNumber, Country, City, Gender;
	int age;
	float Salary;
	float YearlySalary;
};

//Input
void ReadInfo(stInfo &Info)
{
	cout << "Enter first name: \n";
	cin >> Info.FirstName;
	cout << "Enter second name: \n";
	cin >> Info.SecondName;
	cout << "Enter age: \n";
	cin >> Info.age;
	cout << "Enter phone number: \n";
	cin >> Info.PhoneNumber;
	cout << "Enter Country: \n";
	cin >> Info.Country;
	cout << "Enter city: \n";
	cin >> Info.City;
	cout << "Enter gender: \n";
	cin >> Info.Gender;
	cout << "Enter Monthly: \n";
	cin >> Info.Salary;
	Info.YearlySalary = Info.Salary * 12;


}

//Output 
void PrintInfo(stInfo Info)
{
	cout << "\n ************************* \n";
	cout << "First Name: " << Info.FirstName << '\n';
	cout << "Second Name: " << Info.SecondName << '\n';
	cout << "Age: " << Info.age << '\n';
	cout << "Phone Number: " << Info.PhoneNumber << '\n';
	cout << "Country: " << Info.Country << '\n';
	cout << "City: " << Info.City << '\n';
	cout << "Salary: " << Info.Salary << '\n';
	cout << "Yearly salary: " << Info.YearlySalary << '\n';
	cout << "Gender: " << Info.Gender << endl;

	cout << "\n ************************* \n";
}

int main()
{
	stInfo Person1;
	ReadInfo(Person1);
	PrintInfo(Person1);


	stInfo Person2;
	ReadInfo(Person2);
	PrintInfo(Person2);

	cout << "\a";
}

