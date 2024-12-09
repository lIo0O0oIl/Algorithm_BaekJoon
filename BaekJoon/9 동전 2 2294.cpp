// https://www.acmicpc.net/problem/2294

#include <iostream>
using namespace std;

int coin[102];
int dp[10002];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n, k;
	int is_no = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)		// ������ ���� ��ŭ
	{
		cin >> coin[i];
	}

	for (int i = 1; i <= k; i++)		// ���Ϸ��� ������
	{
		for (int j = 1; j <= n; j++)		// ���θ�ŭ...
		{
			if (i - coin[j] < 0)
			{
				is_no++;
				continue;
			}

			if (dp[i - coin[j]] == -1)
			{
				is_no++;
				continue;
			}

			if (dp[i] == 0)
			{
				dp[i] = dp[i - coin[j]] + (dp[i - coin[j]] == -1 ? 0 : 1);
			}
			else
			{
				int now = dp[i - coin[j]] + (dp[i - coin[j]] == -1 ? 0 : 1);
				dp[i] = dp[i] > now ? now : dp[i];
			}
		}
		if (is_no == n)
		{
			dp[i] = -1;
		}
		is_no = 0;
	}

	cout << dp[k];
}

// ���� 0�� ������ ����� -1�� ���ش�.