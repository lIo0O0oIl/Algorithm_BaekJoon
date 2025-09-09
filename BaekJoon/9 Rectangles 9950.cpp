// https://www.acmicpc.net/problem/9950

#include <iostream>
using namespace std;

int main()
{
	int l, w, a;
	while (true)
	{
		cin >> l >> w >> a;
		if (l == 0 && w == 0 && a == 0) break;
		if (l == 0) cout << a / w << ' ' << w << ' ' << a << '\n';
		else if (w == 0) cout << l << ' ' << a / l << ' ' << a << ' ' << '\n';
		else if (a == 0) cout << l << ' ' << w << ' ' << l * w << '\n';
	}
}