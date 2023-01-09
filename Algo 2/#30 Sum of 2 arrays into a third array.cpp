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



void ReadArray(int arr[100], int arr2[100], int& length) {

	/*Could call ReadNumber in main as length = ReadNumber() so you don't have to 
	edit this function to read 2 arrays, and length becomes by value not by referance...*/
	length = ReadNumber("How many numbers in array? ");
	for (int i = 0; i < length; i++)
	{
		arr[i] = RandomNumber(1, 100);
		arr2[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int arr[100], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n' << '\n';
}

void Sum_Arrays(int arr[100], int arr2[100], int SumArray[100], int length) {
	for (int i = 0; i < length; i++)
	{
		SumArray[i] = arr[i] + arr2[i];
	}

	cout << "The sum of the two arrays is: ";
	PrintArray(SumArray, length);
}

int main() {
	srand((unsigned)time(NULL));

	int ArrLength, Arr[100], Arr2[100], SumArray[100];


	ReadArray(Arr, Arr2, ArrLength);
	cout << "\nFirst Array is: ";
	PrintArray(Arr, ArrLength);
	cout << "Second Array is: ";
	PrintArray(Arr2, ArrLength);
	Sum_Arrays(Arr, Arr2, SumArray, ArrLength);

}