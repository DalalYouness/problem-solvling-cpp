#include <iostream>
#include <string>
using namespace std;

float ReadPositivNumber(string message)
{
	float Number;
	do {
		cout << message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

float charge_service(float BillValue)
{
	
	
	return BillValue * 1.1;
}

float TotalBill(float charge_servi)
{
	return charge_servi * 1.16;
}



int main()
{
	 
	cout << "Total Bill = " << TotalBill(charge_service(ReadPositivNumber("Please enter a Bill Value")));
	return 0;
	
}
---------------------------------------------------------------------------------------------------------------------