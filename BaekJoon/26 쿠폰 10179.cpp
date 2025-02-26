// https://www.acmicpc.net/problem/10179

#include <iostream>
using namespace std;

int main()
{
	double t, temp;

	cin >> t;
	cout.precision(2);
	cout << fixed;

	for (int i = 0; i < t; i++)
	{
		cin >> temp;
		cout << '$' << temp * 0.8 << '\n';
	}
}