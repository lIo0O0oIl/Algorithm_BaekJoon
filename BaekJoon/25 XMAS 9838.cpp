// https://www.acmicpc.net/problem/9838

#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n, input;
	map<int, int> map;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> input;
		map.insert({ input, i });
	}
	for (auto i : map)
	{
		cout << i.second << '\n';
	}
}