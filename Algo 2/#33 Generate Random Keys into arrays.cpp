#include <iostream>
#include <cstdlib>
using namespace std;
int ReadPositiveNumber(string message) {
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}
enum enDataType { Capital = 1, Small = 2, Special = 3, Number = 4 };
int RandomNumber(int From, int To) {
	int randNumb = rand() % (To - From + 1) + From;
	return randNumb;
}
char RandomChar(enDataType Character_type) {
	if (Character_type == enDataType::Special)
		return RandomNumber(33, 47);
	else if (Character_type == enDataType::Number)
		return RandomNumber(48, 57);
	else if (Character_type == enDataType::Special)
		return RandomNumber(58, 64);
	else if (Character_type == enDataType::Capital)
		return RandomNumber(65, 90);
	else if (Character_type == enDataType::Special)
		return RandomNumber(91, 96);
	else if (Character_type == enDataType::Small)
		return RandomNumber(97, 122);
	else if (Character_type == enDataType::Special)
		return RandomNumber(123, 126);
}
string GenerateWord(enDataType CharType, short length) {

	string Word;
	for (int i = 1; i <= length; i++)
	{
		Word = Word + RandomChar(CharType);
	}
	return Word;
}
string GenerateKey() {
	string Key;
	for (int i = 0; i <= 4; i++)
	{
		if (i != 4)
			Key = Key + GenerateWord(enDataType::Capital, 4) + "-";
		else
			Key = Key + GenerateWord(enDataType::Capital, 4);

	}
	return Key;
}




void PrintKey(string arr[100], int _Keys) {
	for (int i = 1; i <= _Keys; i++)
	{
		//you could put array key generation and printing into separate functions.
		arr[i-1] = GenerateKey();
		cout << "Array[" << i-1 << "] = " << arr[i - 1] << endl;
	}
}


int main() {
	srand((unsigned)time(NULL));
	string arr1[100];
	int arrLength = ReadPositiveNumber("How Many Keys do you wish to generate?")

	PrintKey(arr1, arrLength);
}

