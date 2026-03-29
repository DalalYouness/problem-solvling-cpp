#include <iostream>
#include <string>
using namespace std;

#include<iostream>
using namespace std;


int ReadPositiveNumber(string message)
{
	int N = 0;
	
	do {
		cout << message << endl;
		cin >> N;


	} while (N <= 0);
	return N;
}

bool IsPerfectNumber(int N)
{
	int Sum = 0;

	for (int i = 1; i < N; i++)
	{
		if (N % i == 0) 

			Sum += i;
		

	}

	return N == Sum;
}

void PrintPerfectNumber(int N)
{
	if (IsPerfectNumber(N))
		cout << N << " is Perfect";
	else
		cout << N << " Not Perfect";
	
		


}



int main()
{
	PrintPerfectNumber(ReadPositiveNumber("Please enter a Positive Number"));
}