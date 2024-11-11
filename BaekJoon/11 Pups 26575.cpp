// https://www.acmicpc.net/problem/26575

#include <iostream>
using namespace std;

int main()
{
	double t, a, b, c;
	cin >> t;
	cout << fixed;
	cout.precision(2);
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b >> c;
		cout << '$' << a * b * c << '\n';
	}
}