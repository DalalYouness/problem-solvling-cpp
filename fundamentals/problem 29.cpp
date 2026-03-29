#include <iostream> 

using namespace std;
enum enODD_EVEN { odd = 1 ,even =2 };

int ReadNumber()
{
	int N;

	cout << "Please enter a Number ?" << endl;
	cin >> N;

	return N;
}

enODD_EVEN CheckOddOrEven(int N)
{
	if (N % 2 != 0)
		return enODD_EVEN::odd;
	else
		return enODD_EVEN::even;

}

int SumODDNumberUsingFor(int N)
{
	int Sum = 0;

	cout << "\nusing while loop" << endl;

	for (int i = 1; i <= N; i++)
	{
		if (CheckOddOrEven(i) == enODD_EVEN::even)
			Sum += i;
			
	}
	return Sum;
}
int SumODDNumberUsingWhile(int N)
{
	int Sum = 0;
	int Counter = 0;
	
	cout << "\nusing while loop" << endl;

	while (Counter < N)
	{
		Counter++;
		if(CheckOddOrEven(Counter) == enODD_EVEN::even)
			Sum += Counter;
	}
		
	return Sum;
}
int SumODDNumberUsingDoWhile(int N)
{
	int Sum = 0;
	int Counter = 0;

	cout << " \nusing do while loop" << endl;

	do
	{
		Counter++;
		if (CheckOddOrEven(Counter) == enODD_EVEN::even)
			Sum += Counter;
	} while (Counter < N);

	return Sum;
}

int main()
{	
	int N = ReadNumber();

	cout << (SumODDNumberUsingDoWhile(N));
	cout << (SumODDNumberUsingWhile(N));
	cout <<(SumODDNumberUsingFor(N));
}	

--------------------------------------------------------------------------------------

aussi pour plus d'info et utilisation

#include <iostream> 

using namespace std;
enum enWhatSum { odd = 1 ,even =2 , All = 3};

int ReadNumber()
{
	int N;

	cout << "Please enter a Number ?" << endl;
	cin >> N;

	return N;
}

enWhatSum ChecWhatSum(int N)
{
	if (N % 2 != 0)
		return enWhatSum::odd;
	else  
		return enWhatSum::even;
	    
	

}


int Sum(int N)
{
	enWhatSum all ;
	int Sum = 0;

	cout << "\nusing while loop" << endl;

	for (int i = 1; i <= N; i++)
	{
		if (All == enWhatSum::All)
			Sum += i;
			
	}
	return Sum;
}


int main()
{ 	
	int N = ReadNumber();

    cout <<Sum(N);
}	