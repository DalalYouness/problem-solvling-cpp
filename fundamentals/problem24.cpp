#include <iostream>

using namespace std;

int ReadAge()
{
    short Age;
    cout << "Please enter your Age?" << endl;
    cin >> Age;

    return Age;
}

bool ValidatENumberInRange(int Number , int from , int to)
{
    return (Number >= from && Number <= to);
}

void PrintResult(int Age)
{
    if (ValidatENumberInRange(Age, 18, 45))
        cout << endl << Age << " is Valid Age" << endl;
    else
        cout << endl << Age << " is inValid Age" << endl;
}
int main()

{

    PrintResult(ReadAge());
    return 0;

}