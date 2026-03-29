#include <iostream>

using namespace std;


int RandNumber(int from, int to)
{
    //Function to generate a random number

    int RandNum = rand() % (to - from + 1) + from;

    return RandNum;


}


void FillArraywithRandomNumber(int Arr[100], int &Arrlenght)
{


    cout << "Enter Number Of Elements" << endl;
    cin >> Arrlenght;

    for (int i = 0; i < Arrlenght; i++)

    {
        Arr[i] = RandNumber(1, 100);
    }

    


}


int MaxNumberInarray(int Arr[100], int Arrlenght)
{

    int Max = 0;

    for (int i = 0; i <= Arrlenght; i++)
    {
        if (Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }

    return Max;

}

void PrintArray(int Arr[100], int Arrlenght)
{
    for (int i = 0; i < Arrlenght; i++)
    {
        cout << Arr[i] << " ";
    }

}


int main()
{
    srand((unsigned)time(NULL));

    int Arrlenght, Arr[100];

    FillArraywithRandomNumber(Arr, Arrlenght);

    cout << "\nArray Elements: ";
    PrintArray(Arr, Arrlenght);

    cout << "\n\nMax Number is : " << 
    MaxNumberInarray(Arr, Arrlenght);


    system("pause>0");

    return 0;
    

}

