#include <iostream>
using namespace std;

int dp[1000001] = { 0 };

int main() {
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = 1 + dp[i - 1];		// 1·Î »©´Â°æ¿ì.....?
		if (i % 3 == 0)
			//dp[i] = min(dp[i % 3], ????);
		if (i % 2 == 0)
			//dp[i] = min();
	}
	cout << dp[n];
}

/*

1 2 3 4 5 6 7 8 9 10
0 1 1 2 3 2 3 3 2 3



*/