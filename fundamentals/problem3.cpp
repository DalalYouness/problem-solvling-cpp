#include <iostream>
using namespace std;

enum enNumberType { Odd = 1 , Even = 2 };

int ReadNumber()
{
    int N;
    cout << "Please enter a Number " << endl;
    cin >> N;
    return N;
}

enNumberType CheckNumberType(int Number)
{
    int Result = Number % 2;
    if (Result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Odd)
        cout << "it's ODD Number" << endl;
    else
        cout << "it's Even Number " << endl;
}

int main()
{

    PrintNumberType(CheckNumberType(ReadNumber()));

}