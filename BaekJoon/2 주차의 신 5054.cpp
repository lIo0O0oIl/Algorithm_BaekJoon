// https://www.acmicpc.net/problem/5054

#include <iostream>
using namespace std;

int main()
{
	int t, n, input;
	int small = 100, big = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> input;
			if (input < small) small = input;
			if (input > big) big = input;
		}
		cout << (big - small) * 2 << '\n';
		small = 100;
		big = 0;
	}
}