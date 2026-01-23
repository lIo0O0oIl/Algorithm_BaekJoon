// https://www.acmicpc.net/problem/8669

#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n, g, r;
	set<int> s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> g >> r;
		s.insert(r);
	}
	cout << s.size();
}