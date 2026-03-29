#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string message)
{
	int N = 0;

	do {

		cout << message << endl;
		cin >> N;

	} while (N < 0);

	return N;
}

char ReadDigits(string message)
{
     char Digits = '0';

	 cout << message << endl;
	 cin >> Digits;

	 return Digits;
}

void PrintDigitFrequency(string Number, char Frequency)

{
	

	int HowMany = 0;
	
	

	for (int i = 0; i < Number.length(); i++)
	{
		

		if (Number[i] == Frequency)
		{
			HowMany ++ ;
			
			

		}

		
	}
	cout <<  "Digits " << Frequency << " Frequency  is " << HowMany << " Time (s)" << endl;

}



int main()
{
	
	string Number = to_string(ReadPositiveNumber("Please enter a Number"));
	char digits = ReadDigits("Please enter Digits ?");
	PrintDigitFrequency(Number, digits);
}






***************************************************************************************************************************************************

#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string message)
{
	int N = 0;

	do {

		cout << message << endl;
		cin >> N;

	} while (N < 0);

	return N;
}



int CountDigitFrequency(short DigitTocheck, int Number)

{
	

	int FreqCount = 0 , Remainder = 0;
	
	while (Number > 0)
	{

		Remainder = Number % 10;
		Number = Number / 10;

		if (Remainder == DigitTocheck)
		{
			FreqCount++;

		}

		
	}

	return FreqCount;

	

}



int main()
{
	
	int Number = ReadPositiveNumber("Please entern the main  Number");
	short DigitToCheck = ReadPositiveNumber("Please enter one Digit to check ?");

	cout << endl << "Digit " << DigitToCheck <<
		" Frequency is " << CountDigitFrequency(DigitToCheck, Number) << " Time(s) \n";


	
}