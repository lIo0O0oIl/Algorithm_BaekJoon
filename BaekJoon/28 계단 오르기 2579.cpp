// https://www.acmicpc.net/problem/2579

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<long long> arr(n + 1), dp(n + 1);
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		arr[i] = temp;
	}

	dp[0] = arr[0];		// ù��° �����.
	dp[1] = arr[0] + arr[1];		// �ι�° ����� �ִ밪�� ù��° + �ι�°
	dp[2] = max(arr[0] + arr[2], arr[1] + arr[2]);		// ����° ����� ù��° + ����°, �ι�° + ����°��.
	for (int i = 3; i < n; i++)
	{
		// �ٸ� ��� ���ʹ� 3��° �� ��� + 1��° ����� + �� �� ������ �ְ����� �پ �� ��������� ���� ���� ���� ��.
		// 2��° ����� + �� �� ���� �ְ����� �پ ���� ���� ��.
		dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]);
	}
	cout << dp[n - 1];		// �� ����� �� ���	�� ��ܿ� �������� �ʴ°� �ְ��� ���� ������ ������ �� ����� �P�ƾ���.
}