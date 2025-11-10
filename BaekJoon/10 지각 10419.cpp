// https://www.acmicpc.net/problem/10419

#include <iostream>
using namespace std;

int main()
{
	int t, d, now = 1;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> d;
		for (int j = 0; j <= d; j++)
		{
			if (j + j * j > d)
			{
				now = j;
				break;
			}
		}
		cout << now - 1 << '\n';
		now = 1;
	}
}

/*
5
1 0
2 1
5 1
6 2
7 2
*/