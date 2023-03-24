#pragma once
#include <iostream>
#include "ReadInput.hpp"
using namespace std;
namespace ArrayLib {
	void ReadArray(int arr[100], int& length) {
		length = ReadNumbers::ReadNumber("How many numbers in array? ", "invlaid entry try again");
		for (int i = 0; i < length; i++)
		{
			cout << "Element[" << i + 1 << "] = ";
			arr[i] = ReadNumbers::ReadNumber("", "invlaid entry try again");
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
		checkfor = ReadNumbers::ReadNumber("\nWhat's the number you are looking for? \n", "User didn't input a number");
		int count = 0;
		for (int i = 0; i < ArrLength; i++)
		{
			if (arr[i] == checkfor)
				count++;

		}
		cout << "The number " << checkfor << " appeared " << count << " times(s) in the array.";
	}

	bool IsArrayPalindrom(int arrSource[100], int arrDestination[100], int SourceLength) {
		for (int i = 0; i < SourceLength; i++)
		{
			if (arrSource[i] != arrDestination[i])
				return false;
		}
		return true;
	}

	void CopyArray(int arr[100], int arr2[100], int length) {
		int counter = 0;
		for (int i = length - 1; i >= 0; i--) {
			arr2[i] = arr[counter];
			counter++;
		}

	}
}