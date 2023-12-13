// https://www.acmicpc.net/problem/1463

#include <iostream>
using namespace std;

int dp[1000001] = { 0 };

int main() {
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = 1 + dp[i - 1];		// 1·Î »©´Â°æ¿ì.....?
		cout << dp[i] << endl;
		if (i % 3 == 0)
		{
			//dp[i] = min(dp[i % 3], ????);
			//dp[i] = min(1 + dp[i - 3], 1 + dp[i - 1]);
		}
		if (i % 2 == 0)
		{
			//dp[i] = min();
			//dp[i] = min(1 + dp[i - 2], 1 + dp[i - 1]);
		}
	}
	cout << endl << dp[n];
}

/*

1 2 3 4 5 6 7 8 9 10
0 1 1 2 3 2 3 3 2 3



*/


#include <iostream>
using namespace std;

int DP[100001] = { 0 };
int main() {
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		DP[i] = 1 + DP[i - 1];
		if (i % 3 == 0) {
			DP[i] = 1 + min(DP[i / 3], DP[i - 1]);
		}
		if (i % 2 == 0) {
			DP[i] = 1 + min(DP[i / 2], DP[i - 1]);
		}
	}
	cout << DP[n];
}