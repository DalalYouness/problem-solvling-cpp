#include <iostream>

using namespace std;


int ReadNumber()

{
    int N;
    cout << "Please enter a Number" << endl;
    cin >> N;
    return N;
}

void PrintN_UsingWihleLoop(int N)
{
    cout << "using while loop" << endl;
    int counter = 0;
    while (counter < N)
    {
        counter++;
        cout << counter << endl;

    }
}

void PrintN_UsingforLoop(int N)
{
    cout << "using for loop" << endl;
    for (int counter = 1; counter <= N; counter++)
    {
        cout << counter << endl;
    }
}

void PrintN_UsingDoWhileLoop(int N)
{
    cout << "using do while loop" << endl;
    int counter = 0;

    do {
        counter++;
        cout << counter << endl;

    } while (counter < N);
}

int main()
{

    int N = ReadNumber();

    PrintN_UsingDoWhileLoop(N);
    PrintN_UsingforLoop(N);
    PrintN_UsingWihleLoop(N);

}