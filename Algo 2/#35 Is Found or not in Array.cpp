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

int FindNumberPositionInArray(int checkFor, int length, int arr[100]) {
	int checkHolder = -1;
	for (int i = 0; i < length; i++)
	{
		if (checkFor == arr[i])
			checkHolder = i;
	}
	return checkHolder;
}

bool IsFoundOrNot(int Result) {
	if (Result != -1){
		return 1;
	}
	return 0;
	
}
void PrintResult(int checkfor, bool IsFoundOrNot) {
	cout << "The number you are looking for is: " << checkfor << endl;
	if (IsFoundOrNot == true)
		cout << "The Number is found in the array :)" << endl;
	else
		cout << "The Number was not found, bad luck :( " << endl;
}


int main() {
	srand((unsigned)time(NULL));
	int arr1[100];
	int from = 1;
	int to = 100;
	int Length = ReadPositiveNumber("How Many Numbers in array?");
	ReadArray(from, to, Length, arr1);
	PrintArray(Length, arr1);
	int checkFor = ReadNumber("What is the number you are looking for? ");
	int Result = IsFoundOrNot(FindNumberPositionInArray(checkFor, Length, arr1));
	PrintResult(checkFor, Result);



}