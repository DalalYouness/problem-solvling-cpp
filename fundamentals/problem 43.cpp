#include <iostream>
using namespace std;

struct strTaskDuration {

	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
float ReadPositiveNumber(string message)
{
	float Number = 0;

	do {

		cout << message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;

}

strTaskDuration SecondsToTaskDuration(int TotalSeconds)

{
	strTaskDuration TaskDuration;

	int const SecondsPerDay = 24 * 60 * 60;
	int const SecondsPerHour = 60 * 60;
	int const SecondsPerMinute = 60;

	int Remainder = 0;

	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;
	TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
    Remainder %= SecondsPerHour;
	TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
	Remainder %=  SecondsPerMinute;
	TaskDuration.NumberOfSeconds = Remainder;
	 
	return TaskDuration;

};

void PrintTaskDuration(strTaskDuration TaskDuration)
{
	cout << endl
	<< TaskDuration.NumberOfDays << ":"
	<< TaskDuration.NumberOfHours << ':'
	<< TaskDuration.NumberOfMinutes << ':' 
	<< TaskDuration.NumberOfSeconds << endl;
}






int main()
{
	int TotalSeconds = ReadPositiveNumber("Please enter the total of seconds ?");
	PrintTaskDuration(SecondsToTaskDuration(TotalSeconds));


}