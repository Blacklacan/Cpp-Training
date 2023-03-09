#include <iostream>
#include <vector>
#include "ReadInput.h";
using namespace std;


struct stEmployee {
	string FirstName;
	string LastName;
	float Salary;
};

void ReadingLoop(vector <stEmployee> & Employee) {
	char Answer = 'y';
	stEmployee tempEmployee;
	do
	{
		cout << "Enter The employee first name: " << endl;
		cin >> tempEmployee.FirstName;
		cout << "Enter The employee Last name: " << endl;
		cin >> tempEmployee.LastName;
		cout << "Enter The employee Salary name: " << endl;
		cin >> tempEmployee.Salary;
		Employee.push_back(tempEmployee);
		cout << "Do you want to enter an another employee? Y/N" << endl;
		cin >> Answer;
	} while (Answer == 'y' || Answer == 'Y');

}

void PrintVector(vector <stEmployee>& Employee) {
	cout << "Your full vector is: " << endl;
	for (stEmployee& Numbers : Employee) {
		cout << "Full Name: " << Numbers.FirstName << " " << Numbers.LastName << endl;
		cout << "Salary: " << Numbers.Salary << endl;
	}
	cout << "Your Employee full size is: " << Employee.size();
}
int main() {

	vector <stEmployee> tempEmployee;
	ReadingLoop(tempEmployee);
	PrintVector(tempEmployee);
	return 0;
}

