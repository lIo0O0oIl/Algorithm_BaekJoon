// https://www.acmicpc.net/problem/20920

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

bool comp(pair<string, int> left, pair<string, int> right)
{
	if (left.second != right.second)
	{
		return left.second > right.second;
	}
	else if (left.first.size() != right.first.size())
	{
		return left.first.size() > right.first.size();
	}
	else return left.first < right.first;
}

int main()
{
	map<string, int> word;
	int n, m;
	string input;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input.size() >= m) word[input]++;
	}
	vector<pair<string, int>> v(word.begin(), word.end());
	sort(v.begin(), v.end(), comp);
	for (auto i : v)
	{
		cout << i.first << '\n';
	}
}