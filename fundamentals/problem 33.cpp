#include <iostream>
using namespace std;

enum enGrade { A = 1, B = 2, C = 3, D = 4 , E = 5 , F = 6 };

int ReadGrade()
{
	int Grade;

	cout << "Please enter the Grade ?" << endl;
	cin >> Grade;

	return Grade;
}

enGrade checkGrade(int Grade)
{
	if (Grade >= 90)
		return enGrade::A;
	else if (Grade >= 80)
		return enGrade::B;
	else if (Grade >= 70)
		return enGrade::C;
	else if (Grade >= 60)
		return enGrade::D;
	else if (Grade >= 50)
		return enGrade::B;
	else
		return enGrade::F;

}

void PrintGrade(enGrade Grade)
{
	switch (Grade)
	{
	case enGrade::A:
		cout << "A" << endl;
		break;
	case enGrade::B:
		cout << "B" << endl;
		break;
	case enGrade::C:
		cout << "C" << endl;
		break;
	case enGrade::D:
		cout << "D" << endl;
		break;
	case enGrade::E:
		cout << "E" << endl;
		break;
	case enGrade::F:
		cout << "F" << endl;
	}
}


int main() 
{
	PrintGrade(checkGrade(ReadGrade()));
	
}
	----------------------------------------------------------------------------------
//abuhadhoud solution
#include <iostream>
using namespace std;



int ReadGradeInRange(int from , int to)
{
	int Grade = 0;

	do {

		cout << "Please enter your Grade between 0 and 100" << endl;
		cin >> Grade;

	} while (Grade < from || Grade > to);

	return Grade;

}

char GetGradeinRange(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';
}


int main() 
{
	cout << "Result is = " << GetGradeinRange(ReadGradeInRange(0, 100)) << endl; // finma ykon range ndir function  from and to
	
}
