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

	dp[0] = arr[0];		// 첫번째 계단임.
	dp[1] = arr[0] + arr[1];		// 두번째 계단의 최대값은 첫번째 + 두번째
	dp[2] = max(arr[0] + arr[2], arr[1] + arr[2]);		// 세번째 계단은 첫번째 + 세번째, 두번째 + 세번째임.
	for (int i = 3; i < n; i++)
	{
		// 다른 계단 부터는 3번째 전 계단 + 1번째 전계단 + 나 로 전전전 최고값에서 뛰어서 내 전계단으로 오고 나를 더한 것.
		// 2번째 전계단 + 나 로 전전 최고값에서 뛰어서 내게 오는 것.
		dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]);
	}
	cout << dp[n - 1];		// 끝 계단의 값 출력	끝 계단에 도달하지 않는게 최고값일 수도 있지만 지금은 끝 계단을 밣아야함.
}