#include <iostream>
#include <cmath>

using namespace std;


void ReadTriangleData(float &a,float &b, float &c)
{


    cout << "Please enter Side a ?" << endl;
    cin >> a;
    cout << "Please enter Side b ?" << endl;
    cin >> b;
    cout << "Please enter Side c ?" << endl;
    cin >> c;

}

float CircleAreaDescirebdaArbtrTri(float a, float b, float c)
{
    const float PI = 3.141592653589793;
    float P = (a + b + c) / 2;

    float Y = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));

    float Area = PI * pow(Y, 2);

    return Area;

}

void PrintArea(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}
int main()
{
    float a, b, c;

    ReadTriangleData(a, b, c);
    PrintArea(CircleAreaDescirebdaArbtrTri(a, b,c));


    return 0;

}