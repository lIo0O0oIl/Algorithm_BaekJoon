// https://www.acmicpc.net/problem/10865

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n, m, a, b;
	cin >> n >> m;
	vector<int> vec(n + 1);
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		vec[a]++;
		vec[b]++;
	}
	for (int i = 1; i <= n; i++)
	{
		cout << vec[i] << '\n';
	}
}