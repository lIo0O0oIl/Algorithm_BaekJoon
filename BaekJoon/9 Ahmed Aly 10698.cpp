// https://www.acmicpc.net/problem/10698

#include <iostream>
using namespace std;

int main()
{
	int t, x, y, z;
	char sign, equals;
	bool isOk = false;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> x >> sign >> y >> equals >> z;

		if (sign == '+' && x + y == z) isOk = true;
		else if (sign == '-' && x - y == z) isOk = true;

		if (isOk) cout << "Case " << i + 1 << ": " << "YES\n";
		else cout << "Case " << i + 1 << ": " << "NO\n";

		isOk = false;
	}
}