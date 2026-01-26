// https://www.acmicpc.net/problem/2167

#include <iostream>
using namespace std;

int arr[301][301];

int main()
{
	int n, m, k, x, y, x2, y2, count = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	/*	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}*/

	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> x >> y >> x2 >> y2;
		for (int j = x - 1; j < x2; j++)
		{
			for (int k = y - 1; k < y2; k++)
			{
				//cout << j << ' ' << k << ' ';
				count += arr[j][k];
			}
		}
		cout << count << '\n';
		count = 0;
	}
}


/*
0 0
0 1

1 1  2 3
0 1
0 2

0 0

*/