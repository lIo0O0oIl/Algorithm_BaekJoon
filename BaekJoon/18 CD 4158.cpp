// https://www.acmicpc.net/problem/4158

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int a, b, temp, cnt = 0;
	unordered_set<long long> set;
	while (true)
	{
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		for (int i = 0; i < a; i++)
		{
			cin >> temp;
			set.insert(temp);
		}
		for (int i = 0; i < a; i++)
		{
			cin >> temp;
			if (set.find(temp) != set.end()) cnt++;
		}
		cout << cnt << '\n';
		set.clear();
		cnt = 0;
	}
}