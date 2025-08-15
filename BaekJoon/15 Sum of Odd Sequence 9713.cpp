// https://www.acmicpc.net/problem/9713

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t, n, answer = 1;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 3; j <= n; j++)
		{
			if (j % 2 == 1) answer += j;
		}
		cout << answer << '\n';
		answer = 1;
	}
}