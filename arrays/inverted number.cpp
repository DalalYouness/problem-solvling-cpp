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


void PrintInvertedNumberPatern(int Number)
{

	cout << "\nReverted Number pattern of " << Number << " :" << endl;

	for (int i = Number; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}

		cout << endl;
	}



}

int main()

{
	PrintInvertedNumberPatern(ReadPositiveNumber("Please enter a Number?"));
	
}