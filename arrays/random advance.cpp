
#include <iostream>
#include<cstdlib>

using namespace std;

enum enRandom{SmallLetter = 1 , CapitalLetter = 2, SpecialCaracter = 3,Digit = 4};


enRandom ReadRandom()
{
    cout << "Please enter one of them?" << endl;
    cout << "\n1 - Random Small Letter" << endl;
    cout << "\n2 - Random Capital Letter" << endl;
    cout << "\n3 - Random Special Character" << endl;
    cout << "\n4 - Random Digit" << endl << endl;

    int choice;
    cin >> choice;

    enRandom Random;
    Random = (enRandom)choice;

    return Random;
}


int RandNumber(int from, int to)
{
    //Function to generate a random number

    int RandNum = rand() % (to - from + 1) + from;
    
    return RandNum;


}



void PrintRondom(enRandom Random)
{

    switch (Random)
    {
    case enRandom::SmallLetter:
        cout << "\nthe Random Small letter for you : ";
        cout <<  char(RandNumber(97, 122));
        break;

    case enRandom::CapitalLetter:
        cout << "\nthe Random Capital letter for you : ";
        cout <<  char(RandNumber(65, 90));
        break;

    case enRandom::SpecialCaracter:
        cout << "\nthe Random Special letter for you : ";
        cout << char(RandNumber(35, 38));
        break;

    case enRandom::Digit:
        cout << "\nthe Random Digit for you : ";
        cout << RandNumber(1, 9);
        break;
      
    }
}

int main()
{
    
    srand((unsigned)time(NULL));

    PrintRondom(ReadRandom());
    
    system("pause>0");
    return 0;

    


}