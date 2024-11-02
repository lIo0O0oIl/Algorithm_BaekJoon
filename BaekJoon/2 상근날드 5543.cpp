// https://www.acmicpc.net/problem/5543

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c, x, y;
	int mb, md;
	cin >> a >> b >> c >> x >> y;
	mb = min({a, b, c});
	md = min(x, y);
	cout << mb + md - 50;
}