// https://www.acmicpc.net/problem/34934

#include <iostream>
using namespace std;

int main()
{
	int t, year;
	string name;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> name >> year;
		if (year == 2026) cout << name;
	}
}