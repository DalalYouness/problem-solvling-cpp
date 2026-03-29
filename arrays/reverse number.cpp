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

int ReverseNumber(int Num)
{
	

	int ReverstNum = 0;
 

		while (Num > 0) {
 
			ReverstNum = ReverstNum * 10 + Num % 10;

			Num = Num / 10;

			

			

	    }
		return ReverstNum;
			
}

int main()
{
	cout << "\nReverse is: "
		<< ReverseNumber(ReadPositiveNumber("Please enter a Number"))
		<< "\n";

	return 0;
}


****************************************************************************************************
int ReverseNumber(intNumber) {
   int Remainder = 0, Number2 = 0; 
  while (Number > 0){
         Remainder = Number % 10;
         Number = Number / 10;
         Number2 = Number2 * 10 + Remainder;
       }

  return Number2;
}