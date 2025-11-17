// https://www.acmicpc.net/problem/18247

#include <iostream>
using namespace std;

int main()
{
	int t, n, m, now = 0, pos = -1;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> m;
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				now++;
				if (j == 11 && k == 3)
				{
					pos = now;
					break;
				}
			}
			if (pos != -1) break;
		}
		cout << pos << '\n';
		now = 0;
		pos = -1;
	}
}