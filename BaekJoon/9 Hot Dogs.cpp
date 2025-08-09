// https://www.acmicpc.net/problem/5666

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float h, p;
	cout.precision(2);
	cout << fixed;
	while (cin >> h >> p)
	{
		cout << round(100 * h / p) / 100 << '\n';
	}
}


/*
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float h, p;
	cout.precision(2);
	cout << fixed;
	while (cin >> h >> p)
	{
		cout << h / p << '\n';
	}
}
*/