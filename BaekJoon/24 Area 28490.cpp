// https://www.acmicpc.net/problem/28490

#include <iostream>
using namespace std;

int main()
{
	int n, x, y, big = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		if (big < x * y) big = x * y;
	}
	cout << big;
}