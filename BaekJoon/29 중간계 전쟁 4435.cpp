// https://www.acmicpc.net/problem/4435

#include <iostream>
using namespace std;

int main()
{
	int t, a, b, c, d, e, f, g, gan = 0, sa = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b >> c >> d >> e >> f;
		gan = (a * 1) + (b * 2) + (c * 3) + (d * 3)
			+ (e * 4) + (f * 10);
		cin >> a >> b >> c >> d >> e >> f >> g;
		sa = (a * 1) + (b * 2) + (c * 2) + (d * 2)
			+ (e * 3) + (f * 5) + (g * 10);
		cout << "Battle " << i + 1 << ": ";
		if (gan == sa) cout << "No victor on this battle field\n";
		else if (gan > sa) cout << "Good triumphs over Evil\n";
		else cout << "Evil eradicates all trace of Good\n";
		gan = 0;
		sa = 0;
	}
}