// https://www.acmicpc.net/problem/30957

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, b = 0, s = 0, a = 0;
	char input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == 'S') s++;
		else if (input == 'B') b++;
		else if (input == 'A') a++;
	}
	int big = max({ b, s, a });
	if (b == big && s == big && a == big)
	{
		cout << "SCU";
		return 0;
	}
	if (big == b) cout << 'B';
	if (big == s) cout << 'S';
	if (big == a) cout << 'A';
}