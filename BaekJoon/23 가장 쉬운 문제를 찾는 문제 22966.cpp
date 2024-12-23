// https://www.acmicpc.net/problem/22966

#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int, string> map;
	int n, level;
	string name;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> level;
		map[level] = name;
	}
	auto iter = map.begin();
	cout << iter->second;
}