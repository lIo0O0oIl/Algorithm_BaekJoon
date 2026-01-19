// https://www.acmicpc.net/problem/29720

#include <iostream>
using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	int small = n - (k * m);
	int big = n - ((k - 1) * m) - 1;
	cout << (small <= 0 ? 0 : small) << ' ';
	cout << (big <= 0 ? 0 : big);
}