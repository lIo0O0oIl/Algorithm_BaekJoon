// https://www.acmicpc.net/problem/10984

#include <iostream>
using namespace std;

int main()
{
	int t, n, c, all = 0;
	float g, gpa = 0.f;
	cin >> t;
	cout << fixed;
	cout.precision(1);
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> c >> g;
			all += c;
			gpa += c * g;
		}
		cout << all << ' ' << gpa / all << '\n';
		all = 0;
		gpa = 0.f;
	}
}