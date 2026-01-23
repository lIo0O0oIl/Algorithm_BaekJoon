// https://www.acmicpc.net/problem/14769

#include <iostream>
#include <string>
#include <cctype>
#include <map>
using namespace std;

int main()
{
	int n;
	string a, b;
	map<int, string> m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (isdigit(a[0])) m.insert({ stoi(a) / 2, b });
		else if (isdigit(b[0])) m.insert({ stoi(b), a });
	}
	for (auto i : m)
	{
		cout << i.second << '\n';
	}
}