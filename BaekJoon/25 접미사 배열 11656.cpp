// https://www.acmicpc.net/problem/11656

#include <iostream>
#include <set>
using namespace std;

int main()
{
	string s, temp;
	set<string> set;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		temp = s.substr(i);
		set.insert(temp);
	}
	for (auto i : set)
	{
		cout << i << '\n';
	}
}