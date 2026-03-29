#include <iostream>
#include <cmath>
using namespace std;


float ReadNumbers()
{
    float R;

    cout << "Please enter Rayon ?" << endl;
    cin >> R;

    return R;
}

float Calcul_Circle_Area(float R)
{
    const float PI = 3.141592653589793238;

    float Area = PI * pow(R, 2);

    return Area;

}

void PrintArea(float Area)
{
    cout << "\nthe circle Area is : " << Area << endl;
}

int main()
{
    PrintArea(Calcul_Circle_Area(ReadNumbers()));
    return 0;

}