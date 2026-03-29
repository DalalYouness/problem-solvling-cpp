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


void PrintNumberPatern(int Number)
{

	cout << "\Number pattern of " << Number << " :" << endl;

	for (int i = 1; i <= Number; i++)
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
	PrintNumberPatern(ReadPositiveNumber("Please enter a Number?"));
	
}