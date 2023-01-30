#include <iostream>
#include <string>
using namespace std;
int ReadNumber(string message) {
	int N = 0;
	cout << message;
	cin >> N;
	return N;
}


int RandomNumber(int From, int To) {
	int randNumb = rand() % (To - From + 1) + From;
	return randNumb;
}

void ReadArray(int arr[100], int& length, int From, int To) {
	length = ReadNumber("How many numbers in array? ");
	for (int i = 0; i < length; i++)
	{
		cout << "Element[" << i + 1 << "] = ";
		arr[i] = RandomNumber(From, To);
		cout << arr[i] << endl;
	}
}
void PrintArray(int arr[10000], int length) {
	cout << "\nOriginal array is: ";
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n' << '\n' << '\a';
}

void CheckArray(int arr[100], int ArrLength) {
	int CountNegative = 0;
	for (int i = 0; i < ArrLength; i++)
	{
		if (arr[i] < 0)
			CountNegative++;
	}
	cout << "The count of negative Numbers is " << CountNegative << " times(s) in the array." << endl;
}
int main() {
	srand((unsigned)time(NULL));

	int ArrLength, Arr[100];
	int from = -100;
	int to = 100;




	ReadArray(Arr, ArrLength, from, to);
	CheckArray(Arr, ArrLength);
	PrintArray(Arr, ArrLength);

	
}