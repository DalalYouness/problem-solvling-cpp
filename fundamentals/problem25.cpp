#include <iostream>

using namespace std;

int Age;

int ReadAge()
{

    cout << "Please enter your Age?" << endl;
    cin >> ::Age;

    return ::Age;
}

bool ValidatENumberInRange(int Number , int from , int to)
{

    return (Number >= from && Number <= to);
}

void PrintResult(int Age)
{
    while (ValidatENumberInRange(::Age, 18, 45) == false)
    {
        cout << endl << ::Age << " is Invalide Age" << endl;
        ReadAge();
    }

    cout << endl << ::Age << " is Valid Age" << endl;

}
int main()

{
    PrintResult(ReadAge());
    return 0;
}
