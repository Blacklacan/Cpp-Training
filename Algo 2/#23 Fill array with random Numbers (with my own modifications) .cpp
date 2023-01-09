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

void ReadArray(int arr[100], int& length, int From, int To ) {
	length = ReadNumber("How many numbers in array? ");
	for (int i = 0; i < length; i++)
	{
		cout << "Element[" << i + 1 << "] = ";
		arr[i] = RandomNumber(From, To);
		cout << arr[i] << endl;
	}
}
void PrintArray(int arr[10000], int length){
	cout << "\nOriginal array is: ";
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n' << '\n' << '\a';
}

void CheckArray(int& checkfor, int arr[100], int ArrLength) {
	checkfor = ReadNumber("\nWhat's the number you are looking for? \n");
	string pos = "at ";
	int count = 0;
	for (int i = 0; i < ArrLength; i++)
	{
		if (arr[i] == checkfor) 
			count++;
	}
	cout << "The number " << checkfor << " appeared " << count << " times(s) in the array.";
}
int main() {
	srand((unsigned)time(NULL));

	int ArrLength, Arr[100], Checkfor;
	int from = ReadNumber("Random Numbers start from: ");
	int to = ReadNumber("Random Numbers end at: ");



	ReadArray(Arr, ArrLength, from, to);
	CheckArray(Checkfor, Arr, ArrLength);
	PrintArray(Arr, ArrLength);
	


}