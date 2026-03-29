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




void PrintInvertedLetterPatern(int Number)
{

	cout << "\n";

	for (int i = Number ; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			
			cout << char(i+64);
		}

		cout << endl;
	}



}

int main()

{
	PrintInvertedLetterPatern(ReadPositiveNumber("Please enter a Number?"));
	
}