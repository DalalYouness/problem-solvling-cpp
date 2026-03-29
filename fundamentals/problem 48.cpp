#include <iostream>
using namespace std;



float ReadPositivNumber (string message)
{
	float Number = 0.00;

	do {
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float MounthlyPayment(float N1, float N2)
{
	return N1 / N2;
}

int main()
{
	float LoanAmount = ReadPositivNumber("Please enter Loan Amouant do you need?");
	float HowManyMounth = ReadPositivNumber("How many mounth Do you need for pay?");

	cout << endl << MounthlyPayment(LoanAmount, HowManyMounth) << " in Mounth" << endl;
	return 0;
}