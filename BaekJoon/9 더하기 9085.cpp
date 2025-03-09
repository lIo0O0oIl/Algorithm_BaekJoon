// https://www.acmicpc.net/problem/9085

#include <iostream>
using namespace std;

int main()
{
	int t, n, input, answer = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> input;
			answer += input;
		}
		cout << answer << '\n';
		answer = 0;
	}
}