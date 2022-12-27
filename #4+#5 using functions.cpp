#include <string>
#include<iostream>
using namespace std;

struct stInfo
{
	int Age;
	bool HasDriverLicense;
	bool HasRecomendation;
};
stInfo ReadInfo() {
	stInfo Person1;
	cout << "Please enter your age: \n";
	cin >> Person1.Age;
	cout << "do you have a license? y for yes and N for No. \n";
	char i = 'a';
	cin >> i;
	Person1.HasDriverLicense = i == 'y' ? true: false;
	cout << "do you have a Recomendation? y for yes and N for No. \n";
	char j = 'a';
	cin >> j;
	Person1.HasRecomendation = j == 'y' ? true : false;
	return Person1;
}
bool IsAccepted(stInfo Person) {
	if (Person.HasRecomendation)
		return true;
	else
		return Person.Age >= 21 && Person.HasDriverLicense == 1;
}
void Validty(stInfo Person) {

	if (IsAccepted(Person))
		cout << "You are hired.";
	else
		cout << "Sorry, you are not eligble.";
}

int main() {
	Validty(ReadInfo());
	return 0;
}