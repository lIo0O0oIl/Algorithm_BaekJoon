// https://www.acmicpc.net/problem/5102

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	while (true)
	{
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		int now = a - b;
		if (now == 3) cout << "0 1\n";
		else if (now >= 2)
		{
			if (now % 2 == 0) cout << now / 2 << " 0\n";
			else cout << now / 2 - 1 << " 1\n";
		}
		else cout << "0 0\n";
	}
}