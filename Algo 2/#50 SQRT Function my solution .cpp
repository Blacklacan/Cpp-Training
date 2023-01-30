#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float ReadNumber(string message) {
	float N = 0;
	cout << message;
	cin >> N;
	return N;
}


int MySQRT(int Number) {
	for (int i = 1; i < Number; i++)
	{
		if (Number / i == i)
		{
			return i;
		}
	}

}
int main() {
	int N = ReadNumber("enter the number you want to SQRT:");
	cout << "Using my sqrt function: " << MySQRT(N) << endl;
	cout << "Using C++ sqrt function: " << sqrt(N) << endl;



}