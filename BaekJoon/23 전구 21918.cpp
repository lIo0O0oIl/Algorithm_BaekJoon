// https://www.acmicpc.net/problem/21918

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, a, b, c;
	cin >> n >> m;
	vector<int> light(n + 1);

	for (int i = 1; i <= n; i++)
	{
		cin >> light[i];
	}

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		if (a == 1)
		{
			light[b] = c;
		}
		else if (a == 2)
		{
			for (int j = b; j <= c; j++)
			{
				light[j] = light[j] == 1 ? 0 : 1;
			}
		}
		else if (a == 3)
		{
			for (int j = b; j <= c; j++)
			{
				light[j] = 0;
			}
		}
		else if (a == 4)
		{
			for (int j = b; j <= c; j++)
			{
				light[j] = 1;
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cout << light[i] << ' ';
	}
}