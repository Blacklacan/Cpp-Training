#include <iostream>
#include "Calculator.h"
#include "ReadInput.hpp"

using namespace std;

enum Operations
{
	Addition = 1,
	Subtraction = 2,
	Multi = 3,
	Division = 4,
	Nothing = 5
};
Operations typeinput() {
	Operations OpType = Operations::Nothing;
	while (OpType != Operations::Addition && OpType != Operations::Subtraction && OpType != Operations::Division && OpType != Operations::Multi)
	{
		string op = ReadStrings::ReadString("Please enter the operation:");
		if (op == "+")
		{
			OpType = Operations::Addition;
		}
		if (op == "-")
		{
			OpType = Operations::Subtraction;
		}
		if (op == "/")
		{
			OpType = Operations::Division;
		}
		if (op == "*")
		{
			OpType = Operations::Multi;
		}
	}

	return OpType;
}
void Calculation(Operations OpType, Calculator& Class, int Number1, int Number2 =0) {
	switch (OpType)
	{
	case Addition:
		Class.Addition(Number1, Number2);
		break;
	case Subtraction:
		if (Number2 == 0)
		{
			Class.SubTraction(Number1);
		}
		else
		{
			Class.SubTraction(Number1, Number2);
		}
		break;
	case Multi:
		Class.Multi(Number1, Number2);
		break;
	case Division:
		Class.Division(Number1, Number2);
		break;
	default:
		break;
	}
}
void start() {
	Calculator Device;
	Device.NumberOne = ReadNumbers::ReadNumber("Enter the number:","Invalid number");
	Operations type = typeinput();
	Device.NumberTwo = ReadNumbers::ReadNumber("Enter the number:", "Invalid number");
	Calculation(type, Device, Device.NumberOne, Device.NumberTwo);
	cout << "Result:" << Device.FinalResualt() << endl;
	char answer = 'y';
	do
	{
		Operations type = typeinput();
		Device.NumberOne = ReadNumbers::ReadNumber("Enter the number:", "Invalid number");
		Calculation(type, Device, Device.NumberOne);
		cout << "Result:" << Device.FinalResualt() << endl;

	} while (tolower(answer) == 'y');
	

}


int main() {
	
	start();

	return 0;


}