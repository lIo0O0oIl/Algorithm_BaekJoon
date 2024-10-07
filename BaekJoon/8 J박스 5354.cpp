// https://www.acmicpc.net/problem/5354

#include <iostream>
using namespace std;

void print(char output, int times)
{
	for (int i = 0; i < times; i++)
	{
		cout << output;
	}
}

int main()
{
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		if (n == 1)
		{
			cout << '#' << '\n' << '\n';
			continue;
		}

		print('#', n);
		cout << '\n';

		for (int j = 0; j < n - 2; j++)
		{
			cout << '#';
			print('J', n - 2);
			cout << '#' << '\n';
		}

		print('#', n);
		cout << '\n' << '\n';
	}
}