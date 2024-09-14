// https://www.acmicpc.net/problem/13118

#include <iostream>
using namespace std;

int main()
{
	long long a, b, c, d;
	long long x, y, r;
	cin >> a >> b >> c >> d >> x >> y >> r;
	if (a == x) cout << 1;
	else if (b == x) cout << 2;
	else if (c == x) cout << 3;
	else if (d == x) cout << 4;
	else cout << 0;
}