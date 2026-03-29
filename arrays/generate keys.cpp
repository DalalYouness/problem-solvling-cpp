#include <iostream>
#include<cstdlib>

using namespace std;


enum enCharType { SmallLetter = 1,CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };


// pour utiliser apres pour dire a l'utilisateur d'enter nombre of keys
int ReadPositiveNumber(string Message)
{
	int Number;

	cout << Message << endl;
	cin >> Number;

	return Number;

}

// ghan7tajo bach irad liya RandNumber o nrado char

int RandomNumber(int from, int to)
{
	int Random;

	Random = rand() % (to - from + 1) + from;

	return Random;
}



char GetRandemChar(enCharType CharType)
{

	switch (CharType)
	{
	case enCharType::SmallLetter:
		return char(RandomNumber(97, 122));


	case enCharType::CapitalLetter:
		return char(RandomNumber(65, 90));

	case enCharType::SpecialCharacter:
		return char(RandomNumber(35,47));

	case enCharType::Digit:
		return char(RandomNumber(48,57));


	}

}


string GenerateWord(enCharType CharType, int lenght)
{
	string word = "";

	for (int i = 1; i <= lenght; i++) 
	{
		word = word + GetRandemChar(CharType);
	}

	return word;
}


string GenerateKey()
{
	string key = "";

	key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	key = key + GenerateWord(enCharType::CapitalLetter, 4) ;

	return key;
}

void GeneratKeys(int NumberOfKeys)
{

	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key[" << i << "] : " << GenerateKey() << endl;
	}



}


int main()
{

	GeneratKeys(ReadPositiveNumber("Please how Many Key do you want to generat?"));

}