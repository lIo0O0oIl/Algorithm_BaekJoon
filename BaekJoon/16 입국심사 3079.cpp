// https://www.acmicpc.net/problem/3079

#include <iostream>
#include <vector>
#include <algorithm>
using ll = long long;	// == typedef long long ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	ll n, m, temp;		// �Ա��ɻ�� ����, ��� ��
	cin >> n >> m;
	vector<ll> times(n);
	for (int i = 0; i < n; i++)
	{
		cin >> times[i];
	}
	sort(times.begin(), times.end());
	ll left = times.front();
	ll right = times.back() * m;
	ll people, mid = 0, answer = 0;
	while (left <= right)
	{
		people = 0;
		mid = (left + right) / 2;
		for (auto t : times)
		{
			people += mid / t;
			if (people > m) break;		// ������� ũ�� ������
		}
		if (people >= m)
		{
			answer = mid;
			right = mid - 1;
		}
		else left = mid + 1;
	}
	cout << answer;
}