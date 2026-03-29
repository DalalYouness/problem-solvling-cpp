#include <iostream>

using namespace std;

void ReadNumbers(int &Num1, int &Num2, int &Num3)
{
    cout << "Please enter Number 1" << endl;
    cin >> Num1;

    cout << "Please enter Number 2" << endl;
    cin >> Num2;

    cout << "Please enter Number 3" << endl;
    cin >> Num3;
}

int Sum(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}


void PrintSum(int Sum)
{
    cout << "\nthe Sum of 3 Numbers is " << Sum << endl;
}





int main()
{
    int N1, N2, N3;
    ReadNumbers(N1, N2, N3);
    PrintSum(Sum(N1, N2, N3));


    return 0;

}