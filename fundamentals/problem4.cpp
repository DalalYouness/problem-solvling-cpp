#include <iostream>

using namespace std;


struct strInfo {

    short Age;
    bool HasDriverLicence;
};

strInfo ReadInfo()
{
    strInfo info;


    cout << "Please enter your Age " << endl;
    cin >> info.Age;

    cout << "do you Have a Driver licence 1 / 0?" << endl;
    cin >> info.HasDriverLicence;

    return info;
}

bool isAccepted(strInfo info)
{
    return (info.Age > 21 && info.HasDriverLicence);
}
void PrintInfo(strInfo Info)
{
    if (isAccepted(Info))
        cout << "\nHired" << endl;
    else
        cout << "\nRejected" << endl;

}

int main()
{
    PrintInfo(ReadInfo());
}