int ReadPositiveNumber(string message)
{
    int Number;
    do {

        cout << message << endl;
        cin >> Number;
    } while (Number <= 1);

    return Number;
}

int RandNumber(int from, int to)
{
    //Function to generate a random number

    int RandNum = rand() % (to - from + 1) + from;

    return RandNum;


}


void PrintRandArrNumber(int Arr[100], int Arrlenght)
{

    for (int i = 0; i < Arrlenght; i++)

    {
        Arr[i] = RandNumber(1, 100);
        cout << Arr[i] << " ";
    }

    


}


int main()
{
    srand((unsigned)time(NULL));

    int Arrlenght = ReadPositiveNumber("Enter Elements Number?");
    int Arr[100];

    
    cout << "\nArray Elements : ";
    PrintRandArrNumber(Arr, Arrlenght);


}
