// https://www.acmicpc.net/problem/32710

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			if (n == i or n == i * j)
			{
				cout << 1;
				return 0;
			}
		}
	}
	cout << 0;
}