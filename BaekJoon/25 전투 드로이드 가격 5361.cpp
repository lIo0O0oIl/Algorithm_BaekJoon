// https://www.acmicpc.net/problem/5361

#include <iostream>
using namespace std;

int main()
{
	float t, a, b, c, d, e;
	float answer = 0;

	cin >> t;
	cout.precision(2);
	cout << fixed;

	for (int i = 0; i < t; i++)
	{
		cin >> a >> b >> c >> d >> e;
		answer += 350.34 * a;
		answer += 230.90 * b;
		answer += 190.55 * c;
		answer += 125.30 * d;
		answer += 180.90 * e;
		cout << '$' << answer << '\n';
		answer = 0;
	}
}