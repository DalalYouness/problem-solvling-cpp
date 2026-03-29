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

void PrintPerfectNumberfrom1toN(int N)

{

	cout << "\nPerfect Numbers from " << 1 << " to " << N << endl;
	for (int i = 1; i <= N; i++)

		if (IsPerfectNumber(i))
			cout << i << endl;
	

}



int main()
{
	PrintPerfectNumberfrom1toN(ReadPositiveNumber("Please enter a Positive Number"));
	return 0;
}