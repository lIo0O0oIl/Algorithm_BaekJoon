// https://www.acmicpc.net/problem/11645

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	int t, n;
	string city;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		unordered_set<string> s;
		for (int j = 0; j < n; j++)
		{
			cin >> city;
			s.insert(city);
		}
		cout << s.size() << '\n';
	}
}