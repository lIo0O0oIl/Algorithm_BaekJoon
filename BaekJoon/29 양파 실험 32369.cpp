// https://www.acmicpc.net/problem/32369

#include <iostream>
using namespace std;

int main()
{
	int n, a, b;
	int good = 1, bad = 1;
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++)
	{
		good += a;
		bad += b;
		if (good < bad)		// 비난이 더 크면
		{
			int temp = good;
			good = bad;
			bad = temp;
		}
		if (good == bad) bad--;

	}
	cout << good << " " << bad;
}


/*
2 5 6

6 7
= 7 6

12 12
= 12 11


*/