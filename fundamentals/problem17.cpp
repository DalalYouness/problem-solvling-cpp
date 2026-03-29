#include <iostream>
#include <string>
using namespace std;


void ReadNumbers(float &A, float &H)
{
    cout << "Please enter A ?" << endl;
    cin >> A;

    cout << "Please enter H ?" << endl;
    cin >> H;

}

float Calcul_Triangle_Area(float A, float H)
{
    return (A * H) / 2;
}

void PrintArea(float Area)
{
    cout << "\nthe triangle Area is : " << Area << endl;
}
int main()
{

    float A, H;
    ReadNumbers(A, H);
    PrintArea(Calcul_Triangle_Area(A, H));


    return 0;

}