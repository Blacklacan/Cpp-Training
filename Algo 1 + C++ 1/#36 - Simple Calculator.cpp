#include <iostream>	

using namespace std;


//void SimpleCalculator(double Num1, string operation, double Num2, double result)
//{
//
//	double result;
//	if (operation == "+")
//	{
//		result = Num1 + Num2;
//	}
//	else if (operation == "-")
//	{
//		result = Num1 - Num2;
//	}
//	else if (operation == "*")
//	{
//		result = Num1 * Num2;
//	}
//	else if (operation == "/")
//	{
//		result = Num1 / Num2;
//	}
//
//	else
//	{
//		string error = "Invalid operation";
//		cout << error << endl;
//	}

//}




int main()
{

	double Num1, Num2, result;
	string operation;


	cout << "Enter Number 1: \n";
	cin >> Num1;
	cout << "Enter Number 2: \n";
	cin >> Num2;
	cout << "Enter the operation: \n";
	cin >> operation;



	if (operation == "+")
	{
		result = Num1 + Num2;
	}
	else if (operation == "-")
	{
		result = Num1 - Num2;
	}
	else if (operation == "*")
	{
		result = Num1 * Num2;
	}

	else if (operation == "/")
	{
		result = Num1 / Num2;
	}
	cout << "the result is: " << result << endl;

	cout << '\a' << endl;
	return 0;
}