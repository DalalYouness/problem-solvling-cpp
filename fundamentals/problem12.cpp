#include <iostream>

using namespace std;

void ReadNumbers(int &Num1, int &Num2)
{
    cout << "Enter the first Number ?" << endl;
    cin >> Num1;

    cout << "Enter the second Number ?" << endl;
    cin >> Num2;


}

int Max_of_two_Numbers(int Num1, int Num2)
{
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

void PrintMax(int Max)

{
    cout << "The Maximum Number is :" << Max << endl;
}

int main()
{
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintMax(Max_of_two_Numbers(Num1, Num2));

    return 0;

}