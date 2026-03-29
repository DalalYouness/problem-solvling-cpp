#include <iostream>
using namespace std;

enum enMounthsOfyear { Jan = 1, Fabr = 2, Mar = 3, April = 4, Mai = 5, June = 6, July = 7, Aug = 8, Sept = 9, Oct = 10,Nov = 11, Dec = 12 };

int ReadNumberInRange(string message , int from , int to)
{
	int Number;
	do {

		cout << message << endl;
		cin >> Number;

	} while (Number <from || Number>to);

	return Number;

}

enMounthsOfyear ReadMounth()
{
	return (enMounthsOfyear)ReadNumberInRange("Please enter Number Of Mounth Jan = 1, Fabr = 2, Mar = 3, April = 4, Mai = 5, June = 6, July = 7, Aug = 8, Sept = 9, Oct = 10,Nov = 11, Dec = 12", 1, 12);
}
string GetMounthsOfYear(enMounthsOfyear Mounth)
{
	

	switch (Mounth)
	{
	case enMounthsOfyear::Jan:
		return "It's January";
	case enMounthsOfyear::Fabr:
		return "It's Fabruary";
	case enMounthsOfyear::Mar:
		return "It's March";
	case enMounthsOfyear::April:
		return "It's April";
	case enMounthsOfyear::Mai:
		return "It's Mai";
	case enMounthsOfyear::June:
		return "It's June";
	case enMounthsOfyear::July:
		return "It's July";
	case enMounthsOfyear::Aug:
		return "It's August";
	case enMounthsOfyear::Sept:
		return "It's September";
	case enMounthsOfyear::Nov:
		return "It's November";
	case enMounthsOfyear::Oct:
		return "It's October";
	case enMounthsOfyear::Dec:
        return "It's December";
		

	}



}


int main()
{
	cout << GetMounthsOfYear(ReadMounth());
	
}