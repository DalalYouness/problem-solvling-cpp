#include <iostream>
using namespace std;

int ReadPositivNumber(string Message)
{
	int N = 0;

	do {
		cout << Message << endl;
		cin >> N;

	} while (N < 0);

		return N;
}

int Factorial(int N)
{
	int F = 1;
	
	for (int i = N; i >= 1; i--)
	{
		F *= i;
	}
	return F;
}


int main()
{
	cout << Factorial(ReadPositivNumber("Please enter a Positive Number "));
	
}