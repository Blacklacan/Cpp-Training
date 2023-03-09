#include <iostream>
using namespace std;

void MinusRecursion(int a, int m){
	if (a >= m)
	{
		cout << a << endl;
		MinusRecursion(a - 1, m);
	}
}

int main() {
	
	MinusRecursion(20, 1);

	return 0;
}

