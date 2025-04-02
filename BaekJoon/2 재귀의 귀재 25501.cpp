// https://www.acmicpc.net/problem/25501

#include <iostream>
using namespace std;

int count = 0;

int recursion(string &s, int i, int r)
{
	::count++;
	if (i >= r) return 1;
	else if (s[i] != s[r]) return 0;
	else return recursion(s, i + 1, r - 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int t;
	string input;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> input;
		cout << recursion(input, 0, input.size() - 1) << ' ';
		cout << ::count << '\n';
		::count = 0;
	}
}