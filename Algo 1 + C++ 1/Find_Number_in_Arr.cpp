#include <string>
#include<iostream>
using namespace std;


void Find_Number_in_Arr(int arr[]) {
	for (int i = 0; i <= 10; i++)
	{
		if (arr[i] == 211)
		{
			cout << "Your number is found in: " << i;
			break;
		}
	}
}

int main() {
	int arr[10] = { 10,22,3,55,66,77,234,211,16,112 };

	Find_Number_in_Arr(arr);
} 