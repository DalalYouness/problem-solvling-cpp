#include <iostream>
#include <string>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string message)
{
	int N;
	do 
	{
		cout << message << endl;
		cin >> N;
	} while (N <= 1);

	return N;
}



string checkPrimeNumber(int N)
{
	
	/*int i = 2;
	if (N == i) {

		return "it's a Prime Number ";
	}

	else if (N % 2 == 0)
		return "it's not a prime Number";
	else {
		while (i != N - 1)
		{
			i++;
			if (N % i == 0)
				return "it's not a prime Number";
		}
	}
	return "it's a Prime Number";*/

	int i = 2;
	int M = round((float)(N / 2));
	if (N == i) {

		return "it's a Prime Number ";
	}

	else if (N % 2 == 0)
		return "it's not a prime Number";
	else 
	{
		for (i = M; i > 2; i--)
		{
			if (N % i == 0)
				return "it's not a prime Number";
		}
	}

	return "it's a Prime Number";

	

}



int main()
{
	cout << checkPrimeNumber(ReadPositiveNumber("Please enter a Positive Number"));
	
}

-------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string message)
{
	int N = 0;
	do 
	{
		cout << message << endl;
		cin >> N;
	} while (N <= 0);

	return N;
}



enPrimeNotPrime checkNumberType(int N)
{
	
	int M = round(N / 2);
	for (int i = 2; i <= M; i++)
	{
		if (N % i == 0)
			return enPrimeNotPrime::NotPrime;

	}
	return enPrimeNotPrime::Prime;


}

void PrintResult(int N)
{
	switch (checkNumberType(N)) 
	{
	case enPrimeNotPrime::NotPrime:
		cout << "the Number is not Prime" << endl;
		break;
	case enPrimeNotPrime::Prime:
		cout << "the Number is Prime" << endl;
		break;

	}
}



int main()
{
	PrintResult(ReadPositiveNumber("Please enter a Positiv Number ?"));
	
}
	