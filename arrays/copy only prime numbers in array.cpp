#include <iostream>

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };


enPrimeNotPrime checkPrime(int Number)
{
    int M = round(Number / 2);
    for (int counter = 2; counter <= M; counter++)
    {
        if (Number % counter == 0)
            return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;


}


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


void CopyArray(int ArrSource[100], int Arrlenght,int ArrDestination[100])
{

    for (int i = 0; i < Arrlenght; i++)
    { 
         ArrDestination[i] = ArrSource[i];
    }

}


void PrintArray(int Arr[100], int Arrlenght)
{
    for (int i = 0; i < Arrlenght; i++)
    {

        cout << Arr[i] << " ";
    }

}


void PrintPrimeNumbers(int Arr[100],int lenghtArr)
{
    

    for (int i = 0; i < lenghtArr; i++)
    {
        if (checkPrime(Arr[i]) == enPrimeNotPrime::Prime)
        {
            cout << Arr[i] << " ";
        }
    }
}



int main()
{
    srand((unsigned)time(NULL));

    int Arrlenght, Arr[100];
    FillArraywithRandomNumber(Arr, Arrlenght);

   
    int Arr2[100];
    CopyArray(Arr, Arrlenght, Arr2);

    cout << "\nArray 1 Elements: \n";
    PrintArray(Arr, Arrlenght);

    cout << "\n\nPrime Number in Arr 2 \n";
    PrintPrimeNumbers(Arr2,Arrlenght);


   
    return 0;
    

}