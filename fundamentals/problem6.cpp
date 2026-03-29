#include <iostream>
using namespace std;


struct StName {

    string firstName;
    string LastName;
};

StName ReadName()
{
    StName Name;
    cout << "Please enter Your First Name ?" << endl;
    cin >> Name.firstName;

    cout << "Please enter Your Last Name ?" << endl;
    cin >> Name.LastName;

    return Name;
}


string GetFullName (StName Name,bool Reverse) /*c pour ca on a utiliser une autre fonction parceque des fois on va modifier la facon d'affichage du
 full Name */
{
    string FullName = "";
    if (Reverse)
        FullName = Name.LastName + " " + Name.firstName;
    else
        FullName = Name.firstName + " " + Name.LastName;
    return FullName;

}

void PrintFullName(string FullName)
{
    cout << "\nYour Full Name is : " << FullName << endl;

}
int main()
{
    PrintFullName(GetFullName(ReadName(),1));
}