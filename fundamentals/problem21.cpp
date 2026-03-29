#include <iostream>
#include <cmath>

using namespace std;

float ReadCircumference()
{
    float L;

    cout << "Please enter the circumference of the circle ?" << endl;
    cin >> L;

    return L;
}

float CircleAreaAlongCircumference(float L)
{
    const float PI = 3.141592653589793;
    float Area = (pow(L, 2)) / (4 * PI);

    return Area;

}

void PrintArea(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}
int main()
{

    PrintArea(CircleAreaAlongCircumference(ReadCircumference()));
    return 0;

}