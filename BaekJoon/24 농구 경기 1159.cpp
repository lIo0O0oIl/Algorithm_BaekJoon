// https://www.acmicpc.net/problem/1159

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int n;
	string input;
	map<char, int> m;
	vector<char> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		m[input[0]]++;
	}
	for (auto i : m)
	{
		if (i.second >= 5)
		{
			v.push_back(i.first);
		}
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}
	if (v.size() == 0) cout << "PREDAJA";
}