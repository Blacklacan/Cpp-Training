#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

class ClsUtil
{

private:
public:


	enum enDataType { Capital = 1, Small = 2, Special = 3, Number = 4 };
	static void Srand() {
		srand((unsigned)time(NULL));
	}

	
	static char RandomChar(enDataType Character_type) {
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

	static int RandomNumber(int From, int To) {
		int randNumb = rand() % (To - From + 1) + From;
		return randNumb;
	}
	static int RandomNumber() {
		int randNumb = rand() % (99999999 - 0 + 1) + 0;
		return randNumb;
	}

	static string GenerateWord(enDataType CharType, short length) {

		string Word;
		for (int i = 1; i <= length; i++)
		{
			Word = Word + RandomChar(CharType);
		}
		return Word;
	}
	static string GenerateKey() {
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
};

