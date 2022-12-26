#include <iostream>
#include <cmath> 
using namespace std;

int SecondsToTime(int Seconds)
{
	int day, Hours, Minutes, ModSeconds;
	double reminder;
	day = floor(Seconds / 60 * 60 * 24);
	reminder = Seconds % 60 * 60 * 24;
	Hours = floor(reminder / 60 * 60);
	reminder = (reminder / 60 * 60);
	Minutes = floor(reminder / 60);
	reminder = (reminder / 60);
	ModSeconds = reminder;
	return day, Hours, Minutes, ModSeconds;
}

int main()
{
	double Seconds;
	cout << "Enter seconds: \n";
	cin >> Seconds;
	cout << SecondsToTime(Seconds);
	return 0;
}