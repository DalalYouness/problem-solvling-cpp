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

int ReverseNumber(int Number) {

	int Remainder = 0, Number2 = 0;
	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2;
}


void PrintInOrder(int Number)
{
	int Remainder = 0;
	int Number2 = ReverseNumber(Number);
	while (Number2 > 0)
	{
		Remainder = Number2 % 10;
		Number2 = Number2 / 10;
		cout << Remainder << endl;

	}
}

int main()
{

	PrintInOrder(ReadPositiveNumber("Please enter a Number"));
}