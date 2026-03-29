#include <iostream> 
#include <string>
using namespace std;



int ReadPositiveNumber(string message)
{
	int Number;
	do {

		cout << message << endl;
		cin >> Number;

	} while (Number < 0);
	return Number;
}

int PrintDigitFreq(int Number,short digit)
{

	int Remainder = 0;
	int HowMany = 0;

	while (Number > 0) {

		Remainder = Number % 10;

		Number = Number / 10;

		if (Remainder == digit)
		{
			HowMany++;
		}

		

	}

	return HowMany;


}


void printAllDigitFreq(int Number)
{
	cout << endl;

	for (int i = 0; i <= 9; i++)
	{
		
		if (PrintDigitFreq(Number, i) == 0)
		{
			continue;
		}
			
		cout << "Digit " << i << " Frequency is " << PrintDigitFreq(Number, i) << " Time(s)."<< endl;
	}

}



int main()
{
	int Number = ReadPositiveNumber("Please enter the main  Number ? ");
	printAllDigitFreq(Number);
	
		
}