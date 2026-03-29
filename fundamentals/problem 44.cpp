#include <iostream>
using namespace std;

enum enWeek { Sun = 1, Mon = 2, Tues = 3,Wedn = 4, Thurs = 5 , Fri = 6,Satur = 7 };

enWeek ReadPositiveNumber(string message)
{
	float Number = 0;
	enWeek WeekDay;
	
	do {

		cout << message << endl;
		cin >> Number;

	} while (Number > 7);

	WeekDay = (enWeek)Number;

	return WeekDay;

}
string checkWeekDay(enWeek WeekDay)
{
	

	switch (WeekDay)
	{
	case enWeek::Sun:
		return "It's Sunday";
			break;
	case enWeek::Mon:
		return "It's Monday";
		break;
	case enWeek::Tues:
		return "It's Thusday";
		break;
	case enWeek::Wedn:
		return "It's Wednesday";
		break;
	case enWeek::Thurs:
		return "It's Thursday";
		break;
	case enWeek::Fri:
		return "It's Friday";
		break;
	case enWeek::Satur:
		return "It's Saturday";
		break;
	}



}


int main()
{
	
	cout << endl << checkWeekDay(ReadPositiveNumber("Please enter Number Between 1 and 7 "));
}
*****************************************************************************************************

#include <iostream>
using namespace std;

enum enWeek { Sun = 1, Mon = 2, Tues = 3,Wedn = 4, Thurs = 5 , Fri = 6,Satur = 7 };

int ReadNumberInRange(string message , int from , int to)
{
	int Number;
	do {

		cout << message << endl;
		cin >> Number;

	} while (Number <from || Number>to);

	return Number;

}

enWeek ReadDayOfWeek()
{
	return (enWeek)ReadNumberInRange("Please enter Number Of Day Sunday = 1, Monday = 2, Tuesday = 3,Wednday = 4, Thursday = 5 , Friday = 6, Saturday = 7", 1, 7);
}
string GetDayOfWeek(enWeek WeekDay)
{
	

	switch (WeekDay)
	{
	case enWeek::Sun:
		return "It's Sunday";
		
	case enWeek::Mon:
		return "It's Monday";
		
	case enWeek::Tues:
		return "It's Thusday";
		
	case enWeek::Wedn:
		return "It's Wednesday";
		
	case enWeek::Thurs:
		return "It's Thursday";
	
	case enWeek::Fri:
		return "It's Friday";
		
	case enWeek::Satur:
		return "It's Saturday";
		
	}



}


int main()
{
	
	cout << endl << GetDayOfWeek(ReadDayOfWeek());
}