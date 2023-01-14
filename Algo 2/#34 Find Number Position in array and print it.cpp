#include <iostream>
#include <string>
using namespace std;
int ReadNumber(string message) {
	int N = 0;
	cout << message;
	cin >> N;
	return N;
}
int ReadPositiveNumber(string message) {
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}
int RandomNumber(int From, int To) {
	int randNumb = rand() % (To - From + 1) + From;
	return randNumb;
}
void ReadArray (int From, int To, int Length, int arr[100]) {
	for (int i = 0; i < Length; i++)
	{
		arr[i] = RandomNumber(From, To);
	}
}
void PrintArray(int Length, int arr[100]) {
	cout << "Array Elememants are: " << endl;
	for (int i = 0; i < Length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
short FindNumberPositionInArray(int checkFor, int length, int arr[100]) {
	for (int i = 0; i < length; i++)
	{
		if (checkFor == arr[i])
			return i;
	}
	return -1;
}
void PrintResult(int checkfor, int FindNumberPositionInArray) {
	cout << "The number you are looking for is: " << checkfor << endl;
	if (FindNumberPositionInArray == -1){
		cout << "The Number was not found :(" << endl;
	}
	else {
		cout << "The Number found at position: " << FindNumberPositionInArray << endl;;
		cout << "The Number order is: " << FindNumberPositionInArray + 1 << endl;;
	}
}


int main() {
	srand((unsigned)time(NULL));
	int arr1[100];
	int from = 1;
	int to = 100;
	int Length = ReadPositiveNumber("How Many Numbers in array?");
	ReadArray(from, to, Length, arr1);
	PrintArray(Length, arr1);

	int checkFor = ReadNumber("What is the number you are looking for?");
	int Result = FindNumberPositionInArray(checkFor, Length, arr1);
	PrintResult(checkFor, Result);



}