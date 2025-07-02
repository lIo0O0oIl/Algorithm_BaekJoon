// https://www.acmicpc.net/problem/9056

#include <iostream>
#include <map>
using namespace std;

int main()
{
	int t;
	string a, b;
	map<char, int> mapA;
	bool yes = true;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		for (int j = 0; j < a.size(); j++)
		{
			mapA[a[j]] = 0;
		}
		for (int j = 0; j < b.size(); j++)
		{
			if (mapA.find(b[j]) == mapA.end())
			{
				yes = false;
			}
			else
			{
				mapA[b[j]]++;
			}
		}
		for (auto i : mapA)
		{
			if (i.second == 0)
			{
				yes = false;
				break;
			}
		}
		if (yes) cout << "YES\n";
		else cout << "NO\n";
		yes = true;
		mapA.clear();
	}
}