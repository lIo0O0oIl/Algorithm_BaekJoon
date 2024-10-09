// https://www.acmicpc.net/problem/4101

#include <iostream>
using namespace std;

int main()
{
	long long a, b;
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0) break;
		cout << (a > b ? "Yes" : "No") << '\n';
	}
}