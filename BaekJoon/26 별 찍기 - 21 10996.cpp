// https://www.acmicpc.net/problem/10996

#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;
	if (n == 1)
	{
		cout << '*';
		return 0;
	}

	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n / 2; i++)
		{
			cout << '*' << ' ';
		}
		if (n % 2 == 1) cout << '*';
		cout << '\n';
		for (int i = 0; i < n / 2; i++)
		{
			cout << ' ' << '*';
		}
		cout << '\n';
	}
}