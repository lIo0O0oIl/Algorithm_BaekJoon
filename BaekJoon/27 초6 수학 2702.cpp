// https://www.acmicpc.net/problem/2702

#include <iostream>
using namespace std;

int main()
{
	int t, a, b, nowA, nowB, c, d;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		nowA = a;
		nowB = b;
		for (int j = 1; j <= a; j++)
		{
			if (a % j == 0 && b % j == 0)
			{
				c = j;
			}
		}
		while (true)
		{
			if (nowA == nowB)
			{
				d = nowA;
				break;
			}
			else if (nowA > nowB) nowB += b;
			else nowA += a;
		}
		cout << d << ' ' << c << '\n';
	}
}