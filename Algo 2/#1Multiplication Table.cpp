#include <string>
#include<iostream>
using namespace std;

void TableHeader() {
	cout << "     ";
	for (int i = 1; i <= 10; i++)
	{
		cout << '\t' << i << "   ";
	}
	cout << "     " << endl;
	cout << "------------------------------------------------------------------------------------- \n";
}
string Column() {
	return  "|";
}

void MultiplyTable() {
	TableHeader();

	for (int i = 1; i <= 10; i++)
	{
		cout << '\n';
		cout << i << Column() <<'\t';
		for (int  j = 1; j <= 10; j++)
		{
			cout << i * j << '\t';
			
		}
	}
}

int main() {

	MultiplyTable();

}