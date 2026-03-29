
#include <iostream>
#include<cstdlib>

using namespace std;


int RandNumber(int from, int to)
{
    //Function to generate a random number

    int RandNum = rand() % (to - from + 1) + from;
    
    return RandNum;


}

int main()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    cout << RandNumber(1, 10) << endl;
    cout << RandNumber(1, 10) << endl;
    cout << RandNumber(1, 10) << endl;
    

    return 0;

    


}