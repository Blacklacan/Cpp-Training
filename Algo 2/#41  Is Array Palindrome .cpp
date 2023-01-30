#include<iostream>
using namespace std;

int ReadNumber(string Message) {
	int N;
	cout << Message << endl;
	cin >> N;
	return N;
}
void ReadArray(int arr[100], int& arrLength) {
	arrLength = ReadNumber("How many numbers in array? ");
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = ReadNumber("Enter the Number ");
	}
}
void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
	cout << endl;
}

void AddArrayElement(int Number, int arr[100], int& arrLength) {
	//its a new element so we need to add the length by 1
	arrLength++;
	arr[arrLength - 1] = Number;
}
void CopyToAnotherArray(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationLength) {
	for (int i = SourceLength -1; i >= 0; i--) {
			AddArrayElement(arrSource[i], arrDestination, DestinationLength);
	};
}


bool IsArrayPalindrom(int arrSource[100], int arrDestination[100], int SourceLength) {
	for (int i = 0; i < SourceLength; i++)
	{
		if (arrSource[i] != arrDestination[i])
			return false;
	}
	return true;
}

void PrintPalindromeResult(int arrSource[100], int arrDestination[100], int SourceLength) {

	if (IsArrayPalindrom(arrSource, arrDestination, SourceLength) == true)
		cout << "Yes the Array is Palindrome" << endl;
	else
		cout << "The Array is not a Palindrome" << endl;
}

int main() {
	int arrSource[100], SourceLength = 0,
		arrDestination[100], DestinationLength = 0;
	ReadArray(arrSource, SourceLength);
	cout << "\nArray 1 elements:\n";
	PrintArray(arrSource, SourceLength);
	CopyToAnotherArray(arrSource, arrDestination, SourceLength, DestinationLength);
	cout << "\nArray 2 elements:\n";
	PrintArray(arrDestination, DestinationLength);
	PrintPalindromeResult(arrSource, arrDestination, SourceLength);
	return 0;
	
}
