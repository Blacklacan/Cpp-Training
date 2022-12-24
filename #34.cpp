#include <iostream>	

using namespace std;


double SalesCommision(double Total_sales)
{
	double result, Commision, Total_Salary;
	if (Total_sales >= 1000000)
	{
		Commision = 1.01;
		Total_Salary = Total_sales * Commision;

	}
	else if (Total_sales >= 500000 && Total_sales < 1000000)
	{
		Commision = 1.02;
		Total_Salary = Total_sales * Commision;
	}
	else if (Total_sales >= 100000 && Total_sales < 500000)
	{
		Commision = 1.03;
		Total_Salary = Total_sales * Commision;
	}
	else if (Total_sales >= 50000 && Total_sales < 100000)
	{
		Commision = 1.05;
		Total_Salary = Total_sales * Commision;
	}
	else if (Total_sales < 50000)
	{
		Commision = 0;
		Total_Salary = Total_sales * Commision;
	}
	else
	{
		Total_Salary = 000000;
	}


	return Total_Salary;
}




int main()
{

	double Total_sales;


	cout << "Enter Total Sales: \n";
	cin >> Total_sales;
	cout << "Your total sales commision is: " << SalesCommision(Total_sales) << endl;

	cout << '\a' << endl;
	return 0;
}