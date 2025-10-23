// https://www.acmicpc.net/problem/2476

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, one, two, three, sum, big = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> one >> two >> three;
		if (one == two && two == three) sum = 10000 + one * 1000;
		else if (one == two || two == three || three == one)
		{
			if (one == two || one == three) sum = 1000 + one * 100;
			else sum = 1000 + two * 100;
		}
		else sum = max({ one, two, three }) * 100;

		if (sum > big) big = sum;
	}
	cout << big;
}