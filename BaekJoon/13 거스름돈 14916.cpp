// https://www.acmicpc.net/problem/14916

#include <iostream>
using namespace std;

int dp[100001] = { -1, -1, 1, -1, 2, 1 };		// 0, 1, 2, 3, 4, 5

int P(int n) {
	if (dp[n] == 0) {
		if (P(n - 5) == -1) {
			dp[n] = 1 + P(n - 2);
			return dp[n];
		}
		dp[n] = 1 + min(P(n - 2), P(n - 5));
	}
	return dp[n];
}

int main() {
	int n;
	cin >> n;
	cout << P(n);
}