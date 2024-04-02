// https://www.acmicpc.net/problem/17212

#include <iostream>
using namespace std;

int DP[100002] = { 0, 1, 1, 2, 2, 1, 2, 1, 2 };

int main() {
	int n;
	cin >> n;
	for (int i = 8; i <= n; i++)
	{
		DP[i] = 1 + min(DP[i - 1], min(DP[i - 2], min(DP[i - 5], DP[i - 7])));
	}
	cout << DP[n];
}