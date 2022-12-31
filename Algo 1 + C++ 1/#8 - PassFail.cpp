#include <string>
#include<iostream>
using namespace std;

float ReadGrade() {
	float grade;
	cout << "Please enter your grade: \n";
	cin >> grade;
	return grade;
}


string Pass_Fail_Check(float grade) {
	string Result = "";
		if (grade >= 50) {
			return Result = "You passed as " + to_string(grade) + " is above passing grade.";
		}
		else {
			return Result = "You failed as " + to_string(grade) + " is below passing grade.";
		}

}


void Printstatus(string statues) {
	cout << statues;
}


int main() {
	Printstatus(Pass_Fail_Check(ReadGrade()));
	return 0;
}