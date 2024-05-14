// https://www.acmicpc.net/problem/2776

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int t, n, m, input;
	unordered_set<int> set;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> input;
			set.insert(input);
		}
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> input;
			if (set.find(input) != set.end())
			{
				cout << 1 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}
		}
		set.clear();
	}
}