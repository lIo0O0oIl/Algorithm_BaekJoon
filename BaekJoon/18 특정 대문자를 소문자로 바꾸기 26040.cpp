// https://www.acmicpc.net/problem/26040

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	string a, b;
	set<char> set;
	cin >> a;
	cin.ignore();
	getline(cin, b);
	for (int i = 0; i < b.size(); i++)
	{
		set.insert(b[i]);
	}
	for (int i = 0; i < a.size(); i++)
	{
		if (set.find(a[i]) != set.end())
		{
			if (a[i] >= 'A' && a[i] <= 'Z')
			{
				a[i] += 32;
			}
		}
	}
	cout << a;
}