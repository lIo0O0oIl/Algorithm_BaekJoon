// https://www.acmicpc.net/problem/5063

#include <iostream>
using namespace std;

int main()
{
	int t, r, e, c;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> r >> e >> c;
		if (r == e - c) cout << "does not matter\n";
		else if (r > e - c) cout << "do not advertise\n";
		else cout << "advertise\n";
	}
}