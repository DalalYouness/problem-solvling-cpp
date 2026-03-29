#include <iostream>

using namespace std;


int ReadNumber()

{
    int N;
    cout << "Please enter a Number" << endl;
    cin >> N;
    return N;
}

void PrintN_UsingWhileLoop(int N)
{
    cout << "using while loop" << endl;
    int counter = N;
    while (counter >= 0)
    {

        cout << counter << endl;
        counter--;

    }
}

void PrintN_UsingforLoop(int N)
{
    cout << "using for loop" << endl;
    for (int counter = N ; counter >= 0; counter--)
    {
        cout << counter << endl;
    }
}

void PrintN_UsingDoWhileLoop(int N)
{
    cout << "using do while loop" << endl;
    int counter = N;

    do {

        cout << counter << endl;
        counter--;

    } while (counter >= 0);
}

int main()
{

    int N = ReadNumber();

    PrintN_UsingDoWhileLoop(N);
    PrintN_UsingforLoop(N);
    PrintN_UsingWhileLoop(N);

}