// https://www.acmicpc.net/problem/28445

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
	string input;
	set<string> s;
	vector<string> v;
	for (int i = 0; i < 4; i++)
	{
		cin >> input;
		s.insert(input);
	}
	for (auto i : s)
	{
		v.push_back(i);
	}
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v.size(); j++)
		{
			cout << v[i] << ' ' << v[j] << '\n';
		}
	}
}