// https://www.acmicpc.net/problem/11586

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, input, k;
	cin >> n;
	vector<vector<char>> vec(n, vector<char>(n, ' '));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> vec[i][j];
		}
	}
	cin >> k;
	if (k == 1)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << vec[i][j];
			}
			cout << '\n';
		}
	}
	else if (k == 2)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = n - 1; j >= 0; --j)
			{
				cout << vec[i][j];
			}
			cout << '\n';
		}
	}
	else if (k == 3)
	{
		for (int i = n - 1; i >= 0; --i)
		{
			for (int j = 0; j < n; j++)
			{
				cout << vec[i][j];
			}
			cout << '\n';
		}
	}
}