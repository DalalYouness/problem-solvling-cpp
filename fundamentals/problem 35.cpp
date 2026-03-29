#include <iostream>
using namespace std;

enum enPiggy {Penny = 1, Nickels = 5, Dime = 10,Quater = 25, Dollars = 100};

struct stPiggyBank {

	int Pennies, Nickels, Dimes, Quaters, Dollars;
	
};

stPiggyBank ReadPiggyBank()
{
	stPiggyBank PiggyBank;

	cout << "Please enter Pennies ?" << endl;
	cin >> PiggyBank.Pennies;

	cout << "Please enter Nickels ?" << endl;
	cin >> PiggyBank.Nickels;

	cout << "Please enter Dimes" << endl;
	cin >> PiggyBank.Dimes;

	cout << "Please enter Quaters" << endl;
	cin >> PiggyBank.Quaters;

	cout << "Please enter Dollars" << endl;
	cin >> PiggyBank.Dollars;
	
	return PiggyBank;
}

int TotalPennies(stPiggyBank PiggyBank)
{
	
	int Total_Pennies;
	Total_Pennies = enPiggy::Penny * PiggyBank.Pennies + enPiggy::Nickels * PiggyBank.Nickels + enPiggy::Dime * PiggyBank.Dimes + enPiggy::Quater * PiggyBank.Quaters + enPiggy::Dollars * PiggyBank.Dollars;
	return Total_Pennies;
}

float TotalDollars(stPiggyBank PiggyBank)
{
	return (float)TotalPennies(PiggyBank) / enPiggy::Dollars;
}
int main() 

{
	stPiggyBank Piggy = ReadPiggyBank();
	cout << "The Total Pennies = " << TotalPennies(Piggy) << endl;;
	cout << "The Total Dollars = " << TotalDollars(Piggy) << endl;
	
}
------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;



struct stPiggyBank {

	int Pennies, Nickels, Dimes, Quaters, Dollars;
	
};

stPiggyBank ReadPiggyBank()
{
	stPiggyBank PiggyBank;

	cout << "Please enter Pennies ?" << endl;
	cin >> PiggyBank.Pennies;

	cout << "Please enter Nickels ?" << endl;
	cin >> PiggyBank.Nickels;

	cout << "Please enter Dimes" << endl;
	cin >> PiggyBank.Dimes;

	cout << "Please enter Quaters" << endl;
	cin >> PiggyBank.Quaters;

	cout << "Please enter Dollars" << endl;
	cin >> PiggyBank.Dollars;
	
	return PiggyBank;
}

int CalculatTotalPennies(stPiggyBank PiggyBank)
{
	
	int Total_Pennies = 0;

	Total_Pennies = 1 * PiggyBank.Pennies + 5 * PiggyBank.Nickels + 10 * PiggyBank.Dimes 
	+ 25 * PiggyBank.Quaters + 100 * PiggyBank.Dollars;

	return Total_Pennies;
}


int main() 
{
	int TotalPennies = CalculatTotalPennies(ReadPiggyBank());
	cout << "\nTotal Pennies = " << TotalPennies << endl;
	cout << "Total Dollars = " << (float)TotalPennies / 100 << endl;
	
}