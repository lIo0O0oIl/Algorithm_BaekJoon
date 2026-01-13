// https://www.acmicpc.net/problem/33845

#include <iostream>
#include <set>
using namespace std;

int main()
{
	string s, t;
	set<char> set;
	cin >> s >> t;
	for (int i = 0; i < s.size(); i++)
	{
		set.insert(s[i]);
	}
	for (int i = 0; i < t.size(); i++)
	{
		if (set.find(t[i]) == set.end()) cout << t[i];
	}
}