// https://www.acmicpc.net/problem/32953

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	int n, m, k, num, count = 0;
	unordered_map<int, int> map;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> num;
			map[num]++;
		}
	}
	for (auto i : map)
	{
		if (i.second >= m) count++;
	}
	cout << count;
}