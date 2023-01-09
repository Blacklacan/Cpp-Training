#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To) {
	int randNumb = rand() % (To - From + 1) + From;
	return randNumb;
}


int main() {
	srand((unsigned)time(NULL));

	cout << RandomNumber(5,8) << endl;
	cout << RandomNumber(2, 9) << endl;
	cout << RandomNumber(1, 6) << endl;
}

