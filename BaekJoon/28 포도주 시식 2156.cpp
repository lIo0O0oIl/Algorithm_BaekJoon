// https://www.acmicpc.net/problem/2156

#include <iostream>
#include <vector>
using namespace std;

vector<int> dp;

int MaxDP(int index)
{
	int temp = 0;

	for (int i = 0; i <= index; i++)
	{
		if (dp[i] > temp) temp = dp[i];
	}

	return temp;
}

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n + 1);

	dp.resize(n + 1);

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		arr[i] = temp;
	}

	dp[0] = arr[0];		// 첫번째 잔
	dp[1] = arr[0] + arr[1];		// 두번째 잔
	dp[2] = max(arr[0] + arr[2], arr[1] + arr[2]);		// 첫번째꺼 + 3번째꺼, 두번째꺼 + 세번째거. 이걸 바꿔야함.
	for (int i = 3; i < n; i++)
	{
		dp[i] = max(MaxDP(i - 3) + arr[i - 1] + arr[i], MaxDP(i - 2) + arr[i]);
	}

	int now = 0;
	for (int i = 0; i < n; i++)
	{
		if (dp[i] > now)
		{
			now = dp[i];
		}
	}
	cout << now;
}


// 연속으로 놓여있는 3잔을 먹을 수는 없으나 먹지 않는건 어떤 칸이라도 가능함.

