#include <iostream>

using namespace std;

void ReadNumbers(int& Num1, int& Num2,int& Num3)
{
    cout << "Enter the Number1 ?" << endl;
    cin >> Num1;

    cout << "Enter the Number2 ?" << endl;
    cin >> Num2;

    cout << "Enter the Number3 ?" << endl;
    cin >> Num3;

}

int Max_of_3_Numbers(int Num1, int Num2,int Num3)
{

    if (Num1 > Num2)
        if (Num1 > Num3)
            return Num1;
        else
            return Num3;
        else
            if (Num2 > Num3)
                return Num2;
            else
                return Num3;
    /*if (Num1 > Num2 && Num1 > Num3)
        return Num1;
    else if (Num2 > Num1 && Num2 > Num3)
        return Num2;
    else
        return Num3;*/
}

void PrintMax(int Max)

{
    cout << "The Maximum Number is : " << Max << endl;
}

int main()
{
    int Num1, Num2,Num3;
    ReadNumbers(Num1, Num2,Num3);
    PrintMax(Max_of_3_Numbers(Num1, Num2,Num3));

    return 0;

}