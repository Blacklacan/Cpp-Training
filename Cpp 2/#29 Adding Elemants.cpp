#include <iostream>
#include <vector>
#include "ReadInput.h";
using namespace std;




void ReadingLoop(vector <int> & vNumbers) {
	char Answer = 'y';
	int Number;
	do
	{
		cout << "Enter The Number: " << endl;
		cin >> Number;
		vNumbers.push_back(Number);
		cout << "Do you want to enter an anoth number? y for yes, n for no." << endl;
		cin >> Answer;
	} while (Answer == 'y' || Answer == 'Y');

}

void PrintVector(vector <int> &vNumbers) {
	cout << "Your full vector is: " << endl;
	for (int &Numbers : vNumbers)
		cout << Numbers << endl;
	cout << "Its full size is: " << vNumbers.size();
}
int main() {
	
	vector <int> vNumbers;
	ReadingLoop(vNumbers);
	PrintVector(vNumbers);
	return 0;
}

