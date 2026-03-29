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




void PrintArray(int Arr[100], int Arrlenght)
{
    for (int i = 0; i < Arrlenght; i++)
    {
        cout << Arr[i] << " ";
    }

}


int SumArray(int Arr[100], int Arrlenght)
{
    int Sum = 0;

    for (int i = 0; i < Arrlenght; i++)
    {
        Sum += Arr[i];
        
    }

    return Sum;
}
int main()
{
    srand((unsigned)time(NULL));

    int Arrlenght, Arr[100];

    FillArraywithRandomNumber(Arr, Arrlenght);

    cout << "\nArray Elements: ";
    PrintArray(Arr, Arrlenght);

    cout << "\nSum Of all numbers : " << 
    SumArray(Arr, Arrlenght) << endl;


    system("pause>0");


   
    return 0;
    

}
