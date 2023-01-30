#include<iostream>
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
void ReadArray(int arr[100], int& arrLength) {
	arrLength = ReadNumber("How many numbers in array? ");
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}
void AddArrayElement(int Number, int arr[100], int& arr2Length) {
	//its a new element so we need to add the length by 1
	arr2Length++;
	arr[arr2Length - 1] = Number;
}


void CopyArrayUsingAddAray(int arr1[100], int arr2[100], int arrLength, int& arr2Length) {
	for (int i = 0; i < arrLength; i++)
	{
		if (arr1[i] % 2 != 0)
			AddArrayElement(arr1[i], arr2, arr2Length);
	}
}

void PrintArray(int arr[100], int arrLength) {
	cout << "Array elements: ";
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}
int main() {
	int arr[100], arr2[100], arrLength = 0, arr2Length = 0;
	ReadArray(arr, arrLength);
	PrintArray(arr, arrLength);
	CopyArrayUsingAddAray(arr, arr2, arrLength, arr2Length);
	PrintArray(arr2, arr2Length);
	return 0;
}