// https://www.acmicpc.net/problem/13240

#include <iostream>
using namespace std;

int main()
{
	int n, m;
	bool is_Start = true;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < m; i++)
		{
			if (is_Start) cout << '*';
			else cout << '.';
			is_Start = !is_Start;
		}
		cout << '\n';
		if (m % 2 == 0) is_Start = !is_Start;
	}
}