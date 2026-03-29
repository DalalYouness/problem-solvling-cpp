#include <iostream>

using namespace std;

void ReadNumberAndPower(int &N,int &M)
{
	cout << "Please enter a Number N ?" << endl;
	cin >> N;

	cout << "Please enter His Power M ?" << endl;
	cin >> M;

}


int PowerOfN(int N, int M)
{
	int Pow = 1;
	
	for (int counter = 0; counter < M; counter++)
	{
		Pow *= N;
	}

	return Pow;
}

int main()
{
	int Number, M;
	
	ReadNumberAndPower(Number, M);
	cout << PowerOfN(Number, M);
}

--------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;
int ReadNumber()
{
	int N;
	cout << "Please enter a Number  ?" << endl;
	cin >> N;

	return N;
}

int ReadPower()
{
	int M;
	cout << "Please enter the Powe ?" << endl;
	cin >> M;

	return M;

}


int PowerOfM(int N, int M)
{

	if (M == 0)
	{
		// Any Number Powered to zero gives 1
		// madrtch else hit sf return katkhrjni direct
		return 1; // toujour return mali kat7a9a9 katkhroj man lfonction
	}

	int Pow = 1;
	
	for (int counter = 1; counter <= M; counter++)
	{
		Pow *= N;
	}

	return Pow;
}

int main()
{
	// bach nqrahom  f fonction Power N 3ad M khasni ndeclarihom des variables
	int N = ReadNumber();
	int M = ReadPower();

	cout << "Result = " << PowerOfM(N, M) << endl;

	
	cout << "Result = " << PowerOfM(ReadNumber(), ReadPower()) << endl;
	// hna mani ghadi n executer ghaybda liya man liman l lisar (kitsama call stack) z3ma ghaybda bl fonction dyal l power 3ad dyal Number ghatl3 maqloba
}
