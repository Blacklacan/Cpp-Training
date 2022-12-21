#include <iostream>

using namespace std;


void ReadGrades(float Grades[3])
{
	cout << "Enter Grade 1: \n";
	cin << Grades[0];
	cout << "Enter Grade 2: \n";
	cin << Grades[1];
	cout << "Enter Grade 3: \n";
	cin << Grades[2];
}

float AverageCalc(Grades[3])
{
	return (Grade[0] + Grade[1] + Grade[2])/3
}

void PrintAverage(Grades[3])
{
	cout << AverageCalc(Grades[3]);
}

int main()
{
	int Grades[3];

	ReadGrades(Grades);
	AverageCalc(Grades);
	PrintAverage(Grades);

	if (AverageCalc(Grades[3]) >= 50)
	{
		cout << "pass \n";
	}
	else
	{
		cout << "Fail \n";
	}
	return 0;

}
