#include <iostream>
#include "ReadInput.hpp"
using namespace std;

class clsEmployee
{
public:
	string FirstName;
	string LastName;
	string FullName() {
		return FirstName + " " + LastName;
	}
};

int main() {


	clsEmployee Employee1;
	cout << "What is your first name? \n";
	cin >> Employee1.FirstName;
	cout << "What is your last name? \n";
	cin >> Employee1.LastName;
	cout << "Your full name is: \n";
	cout << Employee1.FullName();
}