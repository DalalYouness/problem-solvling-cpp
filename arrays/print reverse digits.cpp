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

void reversteDigits(int Num)
{
	cout << "\nReverst digits of " << Num << endl;

	int ReverstNum = 0;

		while (Num > 0) {
 
			ReverstNum = Num % 10;

			Num = Num / 10;

			cout << ReverstNum << endl;

	    }
}

int main()
{
	reversteDigits(ReadPositiveNumber("Please enter a Number"));
}