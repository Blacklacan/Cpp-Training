#include <iostream>
#include <cstdlib>
using namespace std;

enum DataType{Capital =1, Small =2, Special= 3, Number= 4};
int RandomNumber(int From, int To) {
	int randNumb = rand() % (To - From + 1) + From;
	return randNumb;
}

char RandomNumber(DataType Character_type) {
	if (Character_type == DataType::Special)
		return RandomNumber(33,47);
	else if (Character_type == DataType::Number)
		return RandomNumber( 48, 57);
	else if (Character_type == DataType::Capital)
		return RandomNumber(65, 90);
	else if (Character_type == DataType::Small)
		return RandomNumber(97,122);

}


int main() {
	srand((unsigned)time(NULL));

	cout << RandomNumber(DataType::Capital) << endl;
	cout << RandomNumber(DataType::Number) << endl;
	cout << RandomNumber(DataType::Small) << endl;
	cout << RandomNumber(DataType::Special) << endl;

}

