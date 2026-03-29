#include <cmath>
#include <iostream>


using namespace std;

void ReadTriangleData(float &a,float &b) // (a;b)kandirhom by reference bach yt9raw wi n3akso ela l main
{


    cout << "Please enter a ?" << endl;
    cin >> a;
    cout << "Please enter b ?" << endl;
    cin >> b;

}

float CircleAreaInscribedInIoscelesTriangle(float a,float b)
{
    const double PI = 3.141592653589793;

    float Area = (PI * pow(b,2) / 4) * ((2*a-b) / (2*a+b));


    return Area;

}

void PrintArea(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}

int main()
{
    float a, b;

    ReadTriangleData(a, b);
    PrintArea(CircleAreaInscribedInIoscelesTriangle(a, b));

    return 0;

}