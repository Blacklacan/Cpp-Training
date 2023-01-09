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
void ReadArray(int arr[100], int& length) {
	length = ReadNumber("How many numbers in array? ");
	for (int i = 0; i < length; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int arr[100], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n' << '\n' << '\a';
}

void CopyArray(int arr[100], int arr2[100], int length) {
	int counter = 0;
	for (int i = length-1; i >= 0; i--) {
		arr2[i] = arr[counter];
		counter++;
	}
		
}
int main() {
	srand((unsigned)time(NULL));

	int ArrLength, Arr[100], Arr2[100];


	ReadArray(Arr, ArrLength);
	cout << "\nOriginal array is: ";
	PrintArray(Arr, ArrLength);
	CopyArray(Arr, Arr2, ArrLength);
	cout << "\nCopy array is: ";
	PrintArray(Arr2, ArrLength);

}