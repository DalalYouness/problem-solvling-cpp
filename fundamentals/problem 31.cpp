#include <iostream>

using namespace std;

int ReadNumber()
{
	int N;
	cout << "Please enter a Number ?" << endl;
	cin >> N;

	return N;
}

void PowerOf2_3_4(int N)
{
	int a, b, c;

	a = N * N;
	b = N * N * N;
	c = N * N * N * N;

	cout << a << " " << b << " " << c << endl;

}


int main()
{
	PowerOf2_3_4(ReadNumber());
}