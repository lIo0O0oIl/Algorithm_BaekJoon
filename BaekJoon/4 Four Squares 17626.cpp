// https://www.acmicpc.net/problem/17626

#include <iostream>
using namespace std;

int dp[50001];

int main()
{
	int n;
	cin >> n;
	
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		int min = 4;
		for (int j = 1; j * j <= i; j++)
		{
			if (dp[i - j * j] < min)
			{
				min = dp[i - j * j];
			}
		}
		dp[i] = (min + 1) % 5;
	}
	cout << dp[n];
}