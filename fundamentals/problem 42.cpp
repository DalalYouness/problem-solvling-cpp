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
float DaysToSeconds(float NumberOfDays)
{
	return (float)NumberOfDays * 24 * 60 * 60;
}
float HoursToSeconds(float NumberOfHours)
{
	return (float)NumberOfHours * 60 * 60;

}

float MinutesToSeconds(float NumberOfMinutes)
{
	return (float)NumberOfMinutes * 60;
}

float DurationInSeconds(float NumberOfDays, float NumberOfHours, float NumberOfMinutes, float NumberOfSeconds)
{
	return NumberOfDays + NumberOfHours + NumberOfMinutes + NumberOfMinutes;
}
int main()
{
	
	float NumberOfDays = DaysToSeconds(ReadPositiveNumber("Please enter The Number Of Days ?"));
	float NumberOfHours = HoursToSeconds(ReadPositiveNumber("Please enter The Number Of Hours ?"));
	float NumberOfMinutes = MinutesToSeconds(ReadPositiveNumber("Please enter The Number Of Minutes ?"));
	float NumberOfSeconds = ReadPositiveNumber("Please enter The Number Of Seconds ?");

	cout << endl;
	cout << "seconds Per Days = " << NumberOfDays << endl;
	cout << "seconds Per Hours = " << NumberOfHours << endl;
	cout << "seconds Per Minutes = " << NumberOfMinutes << endl;;
	cout << "seconds  = " << NumberOfSeconds << endl << endl;;
	cout << "Total Seconds = " << DurationInSeconds(NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds) << " Seconds.";

}
--------------------------------------------------------------------------------

