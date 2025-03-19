// https://www.acmicpc.net/problem/27160

#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n, count;
	string name;
	map<string, int> m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> count;
		m[name] += count;
	}
	for (auto i : m)
	{
		if (i.second == 5)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}