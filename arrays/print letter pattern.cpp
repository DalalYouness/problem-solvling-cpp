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




void PrintLetterPatern(int Number)
{

	cout << "\n";

	for (int i = 65; i <= Number + 65 - 1; i++)
	{
		for (int j = 1; j <= Number - (Number + 65 - 1 - i); j++)
		{
			cout << char(i);
		}

		cout << endl;
	}



}
int main()

{
	PrintLetterPatern(ReadPositiveNumber("Please enter a Number?"));
	
}