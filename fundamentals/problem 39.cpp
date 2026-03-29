#include <iostream>
#include <string>
using namespace std;

float ReadCash(string message)
{
	float Cash;

	cout << message << endl;
	cin >> Cash;

	return Cash;
}

float Remainder(float CashPaid , float TotalaBill)
{
	float Remainder;
	Remainder = CashPaid - TotalaBill;

	return Remainder;
}


int main()
{
	
	float Total_Bill = ReadCash("Please enter Total Bill");
	float Cash_Paid = ReadCash("Please enter Cash Paid");

	cout << endl <<"Remainder = " << Remainder(Cash_Paid, Total_Bill);
}

----------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

float ReadPositivNumber(string message)
{
	float Number;
	do {
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float Remainder(float TotalBill , float CashPaid)
{
	
	
	return CashPaid - TotalBill;
}


int main()
{
	
	float Total_Bill = ReadPositivNumber("Please enter Total Bill");
	float Cash_Paid = ReadPositivNumber("Please enter Cash Paid");

	cout << "\nTotal Bill = " << Total_Bill << endl;
	cout << "Cash_Paid = " << Cash_Paid << endl;
	cout << "\n********************************\n";

	cout << endl << "Remainder = " << Remainder(Total_Bill, Cash_Paid) << endl;
}
	