// https://www.acmicpc.net/problem/2581

#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n, m, firstPrime = -1, all = 0;
	bool is_Prime = true;
	cin >> m >> n;

	for (int i = m; i <= n; i++)
	{
		if (i == 1) continue;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				is_Prime = false;
				break;
			}
		}

		if (firstPrime == -1 && is_Prime == true)
		{
			firstPrime = i;
			all += i;
		}
		else if (is_Prime == true)
		{
			all += i;
		}

		is_Prime = true;
	}

	if (firstPrime == -1) cout << firstPrime;
	else cout << all << '\n' << firstPrime;
}