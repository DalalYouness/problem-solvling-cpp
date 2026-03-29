int ReadTotalSales()
{
   int TotalSales;
	
   cout << "Please enter Total Sales" << endl;
   cin >> TotalSales;

   return TotalSales;

}

float Commission(int TotalSales)
{
	
	
	if (TotalSales >= 1000000)
		return TotalSales * 0.01;

	else if (TotalSales >= 500000)
		return TotalSales * 0.02;

	else if (TotalSales >= 100000)
		return TotalSales * 0.03;

	else if (TotalSales >= 50000)
		return TotalSales * 0.05;

	else
		return 0;
}

void PrintCommission(float Commission)
{
	cout << "your commission is " << Commission << endl;
}

int main() 

{
	PrintCommission(Commission(ReadTotalSales()));
	
		
}

----------------------------------------------------------------------------------------
//abuhadhoud solution
#include <iostream>
using namespace std;



int ReadTotalSales()
{
   int TotalSales;
	
   cout << "Please enter Total Sales ?" << endl;
   cin >> TotalSales;

   return TotalSales;

}
float GetCommisionPercentage(float TotalSales)
{


	if (TotalSales >= 1000000)
		return 0.01;

	else if (TotalSales >= 500000)
		return 0.02;

	else if (TotalSales >= 100000)
		return 0.03;

	else if (TotalSales >= 50000)
		return 0.05;
    
	else
		return 0.00;
}

float CalculatTotalCommission(float TotalSales)
{
	
	return GetCommisionPercentage(TotalSales) * TotalSales;
	
}

void PrintCommission(float Commission)
{
	cout << "your commission is " << Commission << endl;
}

int main() 

{
	float TotalSales = ReadTotalSales();
	cout << "\nCommission Percentage = " << GetCommisionPercentage(TotalSales) << endl;
	cout << "\nTotal Commission = " << CalculatTotalCommission(TotalSales) << endl;
		
}