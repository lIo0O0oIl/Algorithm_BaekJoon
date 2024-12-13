// https://www.acmicpc.net/problem/29736

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, k, x, min, max, count = 0;
	cin >> a >> b >> k >> x;

	min = k - x;
	max = k + x;

	for (int i = a; i <= b; i++)
	{
		if (i >= min && i <= max)
		{
			count++;
		}
	}
	cout << (count > 0 ? to_string(count) : "IMPOSSIBLE");
}