// https://www.acmicpc.net/problem/7581

#include <iostream>
using namespace std;

int main()
{
	int l, w, h, v;
	while (true)
	{
		cin >> l >> w >> h >> v;
		if (l == 0 && w == 0 && h == 0 && v == 0) break;
		if (v == 0) cout << l << ' ' << w << ' ' << h << ' ' << l * w * h << '\n';
		else if (l == 0) cout << v / (w * h) << ' ' << w << ' ' << h << ' ' << v << '\n';
		else if (w == 0) cout << l << ' ' << v / (l * h) << ' ' << h << ' ' << v << '\n';
		else if (h == 0) cout << l << ' ' << w << ' ' << v / (l * w) << ' ' << v << '\n';
	}
}