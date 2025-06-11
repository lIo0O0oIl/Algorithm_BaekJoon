// https://www.acmicpc.net/problem/20361

#include <iostream>
using namespace std;

int main()
{
	int n, x, k, a, b;
	cin >> n >> x >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> a >> b;
		if (a == x || b == x)
		{
			x = a == x ? b : a;
		}
	}
	cout << x;
}