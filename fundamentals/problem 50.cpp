#include <iostream>
#include <string>
using namespace std;


string ReadPinCode()
{
	string PinCode;
	cout << "PLease enter your PIN code?" << endl;
	cin >> PinCode;

	return PinCode;

}

bool Login()
{
	string PinCode;
	int i = 3;
	do {
		
		PinCode = ReadPinCode();
		i--;
		
		if (PinCode == "1234")
			return true;
		else
		
	    {
			cout << "Wrong PIN You have " << i << " More Tries " << endl;;
			system("color 4F");
			
		}
		
		

	} while (i>=1 && PinCode != "1234");

	return 0;
	
}
int main()
{

	if (Login())
	{
		system("color 2F");
		cout << "\nYour Balance is " << 7500 << endl;
	}
	else
		cout << "\nYour Card is blocked" << endl;

	
}