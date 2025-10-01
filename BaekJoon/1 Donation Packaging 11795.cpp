// https://www.acmicpc.net/problem/11795

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int t, inputA, inputB, inputC, a = 0, b = 0, c = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> inputA >> inputB >> inputC;
		a += inputA;
		b += inputB;
		c += inputC;
		if (a >= 30 && b >= 30 && c >= 30)
		{
			int minCount = min({ a, b, c });
			cout << minCount << '\n';
			a -= minCount;
			b -= minCount;
			c -= minCount;
		}
		else
		{
			cout << "NO\n";
		}
	}
}