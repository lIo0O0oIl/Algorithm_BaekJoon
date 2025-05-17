// https://www.acmicpc.net/problem/11006

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> n >> m;
		int small = n - (n - m);
		cout << small - (n - m) << ' ' << n - m << '\n';
	}
}