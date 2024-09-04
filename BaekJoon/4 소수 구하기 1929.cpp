// https://www.acmicpc.net/problem/1929

#include <iostream>
using namespace std;

int prime[1000001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	long long min, max;
	cin >> min >> max;

	for (int i = 2; i <= max; i++)
	{
		prime[i] = i;
	}
	// 1은 소수가 아님.

	for (int i = 2; i <= max / 2; i++)		// 가장 큰것의 절반까지 검사
	{
		if (prime[i] == 0) continue;

		// 제곱들 다 삭제. 배수 부터 시작해서 가능한 모든 숫자 지움.
		for (int j = 2 * i; j <= max; j += i)
		{
			prime[j] = 0;
		}
	}

	// 남아있는 수 모두 출력
	for (int i = min; i <= max; i++)
	{
		if (prime[i] != 0) cout << prime[i] << '\n';
	}
}


// 에라토스테네스의 체