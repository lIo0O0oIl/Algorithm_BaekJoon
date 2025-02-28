// https://www.acmicpc.net/problem/1094

#include <iostream>
using namespace std;

int main()
{
	int n, now = 64, cut = 0;
	cin >> n;
	while (n != 0)		// (n) °ú µ¿ÀÏ
	{
		if (now > n)
		{
			now /= 2;
		}
		else
		{
			n -= now;
			cut++;
		}
	}
	cout << cut;
}

/*
23
16 4 2 1
11
5
2
1
*/