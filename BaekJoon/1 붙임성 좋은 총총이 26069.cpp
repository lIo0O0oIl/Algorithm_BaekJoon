// https://www.acmicpc.net/problem/26069

#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
	int n, count = 0;
	string a, b;
	unordered_map<string, unordered_set<string>> m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		m[a].insert(b);
		m[b].insert(a);
		if (m[a].find("ChongChong") != m[a].end())
		{
			m[b].insert("ChongChong");
		}
		if (m[b].find("ChongChong") != m[b].end())
		{
			m[a].insert("ChongChong");
		}
	}
	for (auto i : m)
	{
		if (i.second.find("ChongChong") != i.second.end()) count++;
	}
	cout << count;
}