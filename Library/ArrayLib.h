#pragma once
#include <iostream>
#include "ReadInput.h"
using namespace std;
namespace ArrayLib {
	void ReadArray(int arr[100], int& length) {
		length = ReadNumbers::ReadNumber("How many numbers in array? ");
		for (int i = 0; i < length; i++)
		{
			cout << "Element[" << i + 1 << "] = ";
			arr[i] = ReadNumbers::ReadNumber("");
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

	void CheckArray(int& checkfor, int arr[100], int ArrLength) {
		checkfor = ReadNumbers::ReadNumber("\nWhat's the number you are looking for? \n");
		int count = 0;
		for (int i = 0; i < ArrLength; i++)
		{
			if (arr[i] == checkfor)
				count++;

		}
		cout << "The number " << checkfor << " appeared " << count << " times(s) in the array.";
}