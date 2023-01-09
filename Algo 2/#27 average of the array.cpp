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
	cout << "\nOriginal array is: ";
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n' << '\n' << '\a';
}

int Sum_ofArray(int arr[100], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum;
}

float Average_ofArray(int arr[100], int length) {
	return (float)Sum_ofArray(arr, length) / length;
}
int main() {
	srand((unsigned)time(NULL));

	int ArrLength, Arr[100], Checkfor;


	ReadArray(Arr, ArrLength);
	PrintArray(Arr, ArrLength);
	cout << "The average is: " << Average_ofArray(Arr, ArrLength);


}