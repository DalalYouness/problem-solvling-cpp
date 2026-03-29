#include <iostream>
using namespace std;

float ReadPositiveNumber(string message)
{
	float NumberOfHours;

	do {

		cout << message << endl;
		cin >> NumberOfHours;

	} while (NumberOfHours <= 0);

	return NumberOfHours;

}

float CalculNumberDays(float NumberOfHours)
{
	float NumberDays;

	return NumberDays = (NumberOfHours / 24);

}

float CalculNumberWeeks(float NumberDays)
{
	float NumberWeeks;

	return NumberWeeks = (NumberDays / 7);
}

int main()
{
	float N = ReadPositiveNumber("Please enter a Positive Number");

	float Nday = CalculNumberDays(N);

	cout << Nday << " Days" << endl;

	cout << CalculNumberWeeks(Nday) << " Weeks" << endl;
	

}
------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

float ReadPositiveNumber(string message)
{
	float Number;

	do {

		cout << message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;

}

float HoursToDays(float NumberOfHours)
{
	
	return (float)NumberOfHours / 24;

}

float HoursToWeeks(float NumberOfHours)
{
	

	return (float)NumberOfHours / 24 / 7;
}


float DayToWeeks(float NumberOfDays)
{
	return (float)NumberOfDays / 7;
}
int main()
{
	float NumberOfHours = ReadPositiveNumber("Please enter the Number Of hours ?");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DayToWeeks(NumberOfDays);

	cout << endl;

	cout << "Total Hours = " << NumberOfHours << endl;
	cout << "Total Days = " << NumberOfDays << endl;
	cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;
	
	