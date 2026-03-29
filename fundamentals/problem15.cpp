#include <iostream>
#include <string>
using namespace std;

void ReadLenght_Width(float &Lenght, float &Width)
{
    cout << "Please Enter the lenght?" << endl;
    cin >> Lenght;

    cout << "Please Enter the Width?" << endl;
    cin >> Width;
}

float Area_Rectangle(float lenght, float Width)
{
    return lenght * Width;

}


void printArea(float Area)
{
    cout << "\nArea = " << Area << endl;
}


int main()
{

    float a, b;

    ReadLenght_Width(a, b);
    printArea(Area_Rectangle(a, b));

    return 0;

}