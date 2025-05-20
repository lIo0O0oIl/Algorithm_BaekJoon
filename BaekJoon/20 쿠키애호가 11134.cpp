// https://www.acmicpc.net/problem/11134

#include <iostream>
using namespace std;

int main()
{
	int t, n, c;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> c;
		int last = n % c > 0 ? 1 : 0;
		cout << n / c + last << '\n';
	}
}