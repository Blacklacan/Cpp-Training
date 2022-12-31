
#include <iostream>
#include <string>

using namespace std;
using std::cout;
using std::string;
using std::cin;


void Proceuder()
{
	int x, y;
	cout << "Enter x: \n";
	cin >> x;
	cout << "enter y: \n";
	cin >> y;
	int sum = x + y;
	cout << sum;
}

int mysumfunction()
{
	int u, z;
	cout << "Enter u: \n";
	cin >> u;
	cout << "enter z: \n";
	cin >> z;

	return u + z;
	
}

int main() 
{
	Proceuder();
	cout << '\n' << mysumfunction();
	return 0;
}