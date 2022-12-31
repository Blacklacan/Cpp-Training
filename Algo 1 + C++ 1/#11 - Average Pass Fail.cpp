#include <iostream>
using namespace std;


void ReadGrades(float Grades[3]) {
	cout << "Enter Grade 1: \n";
	cin >> Grades[0];
	cout << "Enter Grade 2: \n";
	cin >> Grades[1];
	cout << "Enter Grade 3: \n";
	cin >> Grades[2];
}
float AverageCalc(float Grades[3]) {
	return (Grades[0] + Grades[1] + Grades[2]) / 3;
}
string CheckPass(float average) {
	if (average >= 50)
		return "You Pass";
	else
		return "You fail";
}
void PrintAverage(float Grades[3]) {
	cout << CheckPass(AverageCalc(Grades)) << endl;
}

int main() {
	float Grades[3];
	ReadGrades(Grades);
	PrintAverage(Grades);
}