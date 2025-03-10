// https://www.acmicpc.net/problem/10103

#include <iostream>
using namespace std;

int main()
{
	int t, a = 100, b = 100, aI, bI;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> aI >> bI;
		if (aI > bI) b -= aI;
		else if (aI < bI) a -= bI;
	}
	cout << a << endl << b;
}