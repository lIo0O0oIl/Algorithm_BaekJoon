// https://www.acmicpc.net/problem/25325

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

bool comp(pair<string, int> left, pair<string, int> right)
{
	if (left.second == right.second)
		return left.first < right.first;
	return left.second > right.second;
}

int main()
{
	int n;
	string input;
	map<string, int> m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		m[input] = 0;
	}
	while (cin >> input)
	{
		m[input]++;
	}
	vector<pair<string, int>> v(m.begin(), m.end());
	sort(v.begin(), v.end(), comp);
	for (auto i : v)
	{
		cout << i.first << ' ' << i.second << '\n';
	}
}