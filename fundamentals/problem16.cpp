#include <iostream>
#include <string>
#include <cmath>
using namespace std;


void ReadDiagonal_SideAr(float &a, float &d)
{
    cout << "Please enter Side Area ?" << endl;
    cin >> a;

    cout << "Please enter Diagonal ?" << endl;
    cin >> d;

}

float Calcul_Rect_Area_Diag(float a, float d)
{
    return a * sqrt(pow(d, 2) - pow(a, 2));
}

void PrintArea(float Area)
{
    cout << "\nthe rectangle Area is : " << Area << endl;
}
int main()
{

    float a, d;
    ReadDiagonal_SideAr(a, d);
    PrintArea(Calcul_Rect_Area_Diag(a, d));

    return 0;

}