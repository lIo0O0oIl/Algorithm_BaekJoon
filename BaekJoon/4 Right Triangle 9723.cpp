// https://www.acmicpc.net/problem/9723

#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
	int t, a, b, c;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b >> c;
		a = pow(a, 2);
		b = pow(b, 2);
		c = pow(c, 2);
		int big = max({ a, b, c });
		cout << "Case #" << i + 1 << ": ";
		if (a + b + c - big == big) cout << "YES\n";
		else cout << "NO\n";
	}
}