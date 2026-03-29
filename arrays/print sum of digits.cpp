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

int SumOfDigits(int Num)
{
	

	int ReverstNum = 0, Sum = 0;
 

		while (Num > 0) {
 
			ReverstNum = Num % 10;

			Num = Num / 10;

			Sum += ReverstNum;

			

	    }
		return Sum;
}

int main()
{
	cout << "\nSum Of Digits = "
		<< SumOfDigits(ReadPositiveNumber("Please enter a Number"))
		<< "\n";

	return 0;
}