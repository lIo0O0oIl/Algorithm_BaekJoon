// https://www.acmicpc.net/problem/7595

#include <iostream>
using namespace std;

int main()
{
	int n;
	while (true)
	{
		cin >> n;
		if (n == 0) break;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << '*';
			}
			cout << '\n';
		}
	}
}