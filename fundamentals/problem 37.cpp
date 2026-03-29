#include <iostream>
#include <string>
using namespace std;


float ReadNumber(string message)
{
	float N ;
	
	cout << message << endl;
	cin >> N;
	return N;
}

float SumNumberUntilmines99()
{
	float N = 0.00, Sum = 0.00; 
	int i = 1;
	
	while (N!=(-99))
    {
	 	
		N = ReadNumber("Please enter a Number " + to_string (i));
		
		
		if (N == (-99))
		{
			
			break;
		}
		Sum += N;
		i++;
	}
	
	return Sum;
}


int main()
{
	cout << "\nthe Sum = " << SumNumberUntilmines99() << endl;
}
	