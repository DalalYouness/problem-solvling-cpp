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

float HowMounthForSettle(float N1, float N2)
{
	return N1 / N2;
}

int main()
{
	float LoanAmount = ReadPositivNumber("Please enter Loan Amouant do you need?");
	float MounthlyPayment = ReadPositivNumber("How much do you want to pay each mounth");

	cout << HowMounthForSettle(LoanAmount, MounthlyPayment) << " Mounth" << endl;
	return 0;
}