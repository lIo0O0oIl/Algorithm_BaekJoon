// https://www.acmicpc.net/problem/1463

#include <iostream>
using namespace std;

int DP[1000001] = { 0 };
int main() {
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		DP[i] = 1 + DP[i - 1];
		if (i % 3 == 0) {
			DP[i] = 1 + min(DP[i / 3], DP[i] - 1);
		}
		if (i % 2 == 0) {
			DP[i] = 1 + min(DP[i / 2], DP[i] - 1);
		}
	}
	cout << DP[n];
}

/*

1 2 3 4 5 6 7 8 9 10
0 1 1 2 3 2 3 3 2 3

*/