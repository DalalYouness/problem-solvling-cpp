void  MultiplicatioInRange(int from, int to)
{
	cout << "\t\t\tMultiplication Table From " << from  << " to " << to << "\n\n";

	for (int i = from; i <= to; i++)
	{
		cout << "\t" << i;
		


	}
}

void TableOfMultiplication(int from, int to)
{
	cout << "\n---------------------------------------------------------------------------------------\n";

	for (int i = from; i <= to; i++)
	{
		cout << i << "   |   ";

		for (int j = from; j <= to; j++)
		{
			cout << j * i << "\t";
		}

		cout << endl;
	}

}



int main()
{

	MultiplicatioInRange(2, 6);
	TableOfMultiplication(2, 6);



}


********************************************************************************************************************************************


#include <iostream>
#include <string>

using namespace std;

void PrintTableHeader()
{
	cout << "\n\n\t\t\t Multiplication Table From 1 to 10\n\n";
	cout << "\t";

	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";

	}
	cout << "\n-------------------------------------------------------------------------------------------\n";
}

string ColumnSuperator(int i)
{
	if (i < 10)
		return "   |";
	else
		return "  |";
}

void PrintTableMiultiplication()
{
	PrintTableHeader();

	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << ColumnSuperator(i) <<  "\t";
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}

		cout << endl;

	}
}

int main()
{

	
	PrintTableMiultiplication();
	return 0;


}



	

	



