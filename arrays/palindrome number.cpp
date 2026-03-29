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

bool isPalindromeNumber(int Number) {

	return Number == ReverseNumber(Number);

}

void printPalindromeNumber(int Number)
{
	if (isPalindromeNumber(Number))

		cout <<  "\nYes " << Number << " is a Palindrome Number";
	else 
		cout << "\nNo " << Number << " is NOT a Palindrome Number";
}

int main()
{
	printPalindromeNumber(ReadPositiveNumber("Please enter a number?"));
	
}