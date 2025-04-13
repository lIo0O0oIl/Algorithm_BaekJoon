// https://www.acmicpc.net/problem/10569

#include <iostream>
using namespace std;

int main()
{
	int t, v, e;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> v >> e;
		cout << 2 - v + e << '\n';
	}
}