#include <iostream>

using namespace std;

int ReadPositiveNumber(string message) {

    int Number;
    do {

        cout << message << endl;
        cin >> Number;

    } while (Number < 0);

    return Number;
}

void ReadArray(int Arr[100], int &Arrlenght)
{

    cout << "Enter Number Of Elements" << endl;
    cin >> Arrlenght;

    cout << "Enter Array elements : " << endl;


    for (int i = 0; i < Arrlenght; i++)
    {
        cout << "Element[" << i + 1 << "]: ";
        cin >> Arr[i];

        
    }
}


void PrintArr(int Arr[100], int Arrlenght)
{

    for (int i = 0; i < Arrlenght; i++)

    {
        cout << Arr[i] << " ";
    }
    
    cout << endl;
  
    
}


int ReapetedTime(int Arr[100], int Arrlenght, int NumberToCheck)
{

    int Counter = 0;

    for (int i = 0; i < Arrlenght; i++)
    {
        if (NumberToCheck == Arr[i])
        {

            Counter++;
        }
    }

    return Counter;
}


int main() 
{

    int Arr[100], Arrlenght;

    ReadArray(Arr, Arrlenght);

    int NumberToCheck = ReadPositiveNumber("Please enter Number you want to check");

    cout << "Original Array : ";
    PrintArr(Arr, Arrlenght);

   
    cout << NumberToCheck << " is Reapeted " << ReapetedTime(Arr, Arrlenght, NumberToCheck)
        << " Time(s)";
}