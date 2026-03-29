#include <iostream>

using namespace std;

void ReadNumbers(int &Mark1, int &Mark2, int &Mark3)
{
    cout << "Please enter Number 1" << endl;
    cin >> Mark1;

    cout << "Please enter Number 2" << endl;
    cin >> Mark2;

    cout << "Please enter Number 3" << endl;
    cin >> Mark3;
}

int Sum(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float Average(int Mark1,int Mark2,int Mark3)
{

    return (float)Sum(Mark1, Mark2, Mark3) / 3;
}
void PrintSum(float Avg)
{
    cout << "\nthe Average is  " << Avg << endl;
}

int main()
{
    int Mark1, Mark2, Mark3;
    ReadNumbers(Mark1, Mark2, Mark3);
    PrintSum(Average(Mark1, Mark2, Mark3));


    return 0;

}