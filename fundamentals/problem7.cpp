#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{

    int Num;

    cout << "Please enter a Number ?" << endl;
    cin >> Num;
    return Num;

}

float CalculHalfNum(int Num)
{

    return (float)Num / 2;
}


void PrintHalf_Num(int Num)
{
    string Result = "Half of " + to_string(Num) + " is " + to_string(CalculHalfNum(Num));
    cout << endl << Result << endl;
}

int main()
{
    PrintHalf_Num(ReadNumber());
    return 0;
}
