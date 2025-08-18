// https://www.acmicpc.net/problem/9286

#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int t, n, temp;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		cout << "Case " << i + 1 << ":\n";
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			if (temp >= 6) continue;
			cout << temp + 1 << '\n';
		}
	}
}