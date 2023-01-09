#include <iostream>
#include <string>
using namespace std;

enum enPrimeNotPrime { Prime = 1, Not_Prime = 2 };
int ReadNumber(string message) {
	int N = 0;
	cout << message;
	cin >> N;
	return N;
}
enPrimeNotPrime CheckPrimeNumber(int Number) {

	int M = round(Number / 2);

	for (int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
			return enPrimeNotPrime::Not_Prime;
	}

	return enPrimeNotPrime::Prime;
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
	cout << '\n' << '\n';
}

void CopyArray(int arr[100], int arr2[100], int length_1, int& length_2) {
	int counter = 0;
	for (int i = 0; i < length_1; i++)
	{
		if (CheckPrimeNumber(arr[i]) == enPrimeNotPrime::Prime) {
			arr2[counter] = arr[i];
			counter++;
		}
	}
	length_2 = --counter;
}

int main() {
	srand((unsigned)time(NULL));

	int ArrLength, Arr[100], Arr2[100], Arrlength_2;


	ReadArray(Arr, ArrLength);
	cout << "\nOriginal array is: ";
	PrintArray(Arr, ArrLength);
	CopyArray(Arr, Arr2,ArrLength, Arrlength_2);
	cout << "\nCopy array of only prime numbers is: ";
	PrintArray(Arr2, Arrlength_2);

}