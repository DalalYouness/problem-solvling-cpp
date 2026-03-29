#include <iostream>

using namespace std;

enum enPASSFAIL{Pass = 1,Fail = 2};

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


enPASSFAIL Check_Average(float Average)
{
    if (Average >= 50)
        return enPASSFAIL::Pass;
    else
        return enPASSFAIL::Fail;
}


void PrintResult(float Avg)
{
    cout << "\nYour Average is  " << Avg << endl;

    if (Check_Average(Avg)==enPASSFAIL::Pass)
        cout << "PASS" << endl;
    else
        cout << "FAIL" << endl;
}

int main()
{
    int Mark1, Mark2, Mark3;
    ReadNumbers(Mark1, Mark2, Mark3);
    PrintResult(Average(Mark1, Mark2, Mark3));

    return 0;

}