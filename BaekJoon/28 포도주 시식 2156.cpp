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

	dp[0] = arr[0];		// ù��° ��
	dp[1] = arr[0] + arr[1];		// �ι�° ��
	dp[2] = max(arr[0] + arr[2], arr[1] + arr[2]);		// ù��°�� + 3��°��, �ι�°�� + ����°��. �̰� �ٲ����.
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


// �������� �����ִ� 3���� ���� ���� ������ ���� �ʴ°� � ĭ�̶� ������.

