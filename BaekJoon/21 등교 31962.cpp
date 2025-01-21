// https://www.acmicpc.net/problem/31962

#include <iostream>
using namespace std;

int main()
{
	int n, x, s, t, maxS = -1;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		cin >> s >> t;
		if (x - (s + t) >= 0)
		{
			if (maxS < s)
			{
				maxS = s;
			}
		}
	}
	cout << maxS;
}