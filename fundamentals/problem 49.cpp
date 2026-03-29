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
	
	do {
		
		PinCode = ReadPinCode();
		
		
		if (PinCode == "1234")
			return true;
		else
		
	    {
			cout << "Wrong PIN You have " << endl;
			system("color 4F");
			
		}
		
		

	} while (PinCode != "1234");

	
	
}
int main()
{

	if (Login())
	{
		system("color 2F");
		cout << "\nYour Balance is " << 7500 << endl;
	}
	

	
}