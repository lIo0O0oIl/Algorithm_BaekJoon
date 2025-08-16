// https://www.acmicpc.net/problem/8760

#include <iostream>
using namespace std;

int main()
{
	int t, w, k;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> w >> k;
		cout << w * k / 2 << '\n';
	}
}