// https://www.acmicpc.net/problem/11659

#include <iostream>
using namespace std;

int arr[100001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n, m, left, right;
	long long answer = 0;

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		int temp;
		cin >> temp;
		arr[i] = temp + arr[i - 1];
	}

	for (int i = 0; i < m; i++)
	{
		cin >> left >> right;
		answer = arr[right] - arr[--left];
		cout << answer << '\n';
		answer = 0;
	}
}