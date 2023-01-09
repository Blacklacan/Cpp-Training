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
void ReadArray(int arr[100], int length) {
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

void Swap(int& Num1, int& Num2)
{
	int temp;
	temp = Num1;
	Num1 = Num2;
	Num2 = temp;
}
void ShuffleArray(int arr[100], int length) {
	for (int i = 0; i < length; i++)
	{
		Swap(arr[RandomNumber(1, length) - 1], arr[RandomNumber(1, length) - 1]);

	}
	
}

int main() {
	srand((unsigned)time(NULL));

	int ArrLength = ReadNumber("How many numbers in array? ");
	int Arr[100];


	ReadArray(Arr, ArrLength);
	cout << "\nFirst Array is: ";
	PrintArray(Arr, ArrLength);

	ShuffleArray(Arr, ArrLength);
	PrintArray(Arr, ArrLength);
}