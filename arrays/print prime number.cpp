#include <iostream>
#include <string>
using namespace std;

#include<iostream>
using namespace std;

enum enPrimeNotPrime { Prime = 1 , NotPrime = 2 };

int ReadAPositiveNumber(string message)
{
	int N = 0;
	do {
		cout << message << endl;
		cin >> N;

	} while (N <= 0);

	return N;
}

enPrimeNotPrime checkPrime(int Number)
{
	int M = round(Number / 2);
	for (int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
			return enPrimeNotPrime::NotPrime;
	}

	return enPrimeNotPrime::Prime;


}

void PrintPrimeNumberfrom1toN(int Number)
{
	cout << "\n";
	cout << "Prime Numbers From " << 1 << " to " << Number << " are :" << endl;

	for (int i = 1; i <= Number; i++)
	{
		if (checkPrime(i) == enPrimeNotPrime::Prime)
		{
			cout << i << endl;
		}
	}
}


int main()
{
	PrintPrimeNumberfrom1toN(ReadAPositiveNumber("Please enter a Positive Number"));
}