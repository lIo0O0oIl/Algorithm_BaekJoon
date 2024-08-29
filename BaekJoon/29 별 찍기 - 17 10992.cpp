// https://www.acmicpc.net/problem/10992

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			cout << ' ';
		}
		cout << '*';
		if (i == 0)
		{
			cout << '\n';
			continue;
		}
		for (int j = 0; j < i * 2 - 1; j++)
		{
			if (i == n - 1)
			{
				cout << '*';
			}
			else
			{
				cout << ' ';
			}
		}
		cout << '*' << '\n';
	}
}