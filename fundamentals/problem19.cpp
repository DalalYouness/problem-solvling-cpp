#include <iostream>
#include <cmath>
using namespace std;


float ReadNumbers()
{
    float D;

    cout << "Please enter Diameter ?" << endl;
    cin >> D;

    return D;
}

float Calcul_Circle_Area_Throught_Diameter(float D)
{
    const float PI = 3.141592653589793238;

    float Area = (PI * pow(D,2))/4;

    return Area;

}

void PrintArea(float Area)
{
    cout << "\nthe circle Area is : " << Area << endl;
}
int main()
{
    PrintArea(Calcul_Circle_Area_Throught_Diameter(ReadNumbers()));
    return 0;
}