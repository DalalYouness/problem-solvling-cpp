#include <iostream>
#include <cmath>

using namespace std;

float ReadSquareSide()
{
    float A;

    cout << "Please enter square side A ?" << endl;
    cin >> A;

    return A;
}

float CircleAreaInscribedInSquare(float A)
{
    const float PI = 3.141592653589793238;

    float Area = PI * pow(A/2,2);

    return Area;

}

void PrintArea(float Area)
{
    cout << "\nthe circle Area is : " << Area << endl;
}
int main()
{

    PrintArea(CircleAreaInscribedInSquare(ReadSquareSide()));

    return 0;

}