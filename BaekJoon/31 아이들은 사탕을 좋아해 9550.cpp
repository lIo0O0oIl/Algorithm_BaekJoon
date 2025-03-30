// https://www.acmicpc.net/problem/9550

#include <iostream>
using namespace std;

int main()
{
	int t, n, k, temp, answer = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> k;
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			answer += temp / k;
		}
		cout << answer << '\n';
		answer = 0;
	}
}