int ReadPositiveNumber(string message) {

    int Number;
    do {

        cout << message << endl;
        cin >> Number;

    } while (Number < 0);

    return Number;
}


int RandNumber(int from, int to)
{
    //Function to generate a random number

    int RandNum = rand() % (to - from + 1) + from;

    return RandNum;


}


void FillArraywithRandomNumber(int Arr[100], int Arrlenght)
{

   

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


void SumArray(int Arr1[100], int Arr2[100],int Arrlenght)
{
    
    int Arr3[100];

    for (int i = 0; i < Arrlenght; i++)
    {
        Arr3[i] = Arr1[i] + Arr2[i];
        cout << Arr3[i] << " ";
    }

}


int main()
{
    srand((unsigned)time(NULL));

    int Arrlenght = ReadPositiveNumber("Please Number Of elements ?");
    int Arr[100];
    FillArraywithRandomNumber(Arr, Arrlenght);

   
    int Arr2[100];
    FillArraywithRandomNumber(Arr2, Arrlenght);
   

    cout << "\nArray 1 Elements: \n";
    PrintArray(Arr, Arrlenght);

    cout << "\n\nArray 2 Elements : \n";
    PrintArray(Arr2, Arrlenght);
    cout << endl;

    cout << "\nSum Of Array1 and Array2 Elements : \n";
    SumArray(Arr, Arr2, Arrlenght);
    cout << endl;
    return 0;
    

}
