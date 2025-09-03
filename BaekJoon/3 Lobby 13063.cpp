// https://www.acmicpc.net/problem/13063

#include <iostream>
using namespace std;

int main()
{
	int all, me, other, otherOrigin, changer = 0;
	while (true)
	{
		cin >> all >> me >> other;
		otherOrigin = other;
		if (all == 0 && me == 0 && other == 0) break;
		if (all > me + other) other += all - (me + other);
		while (true)
		{
			// 내가 other보다 커졌으면
			if (me > other)
			{
				cout << changer << '\n';
				break;
			}

			// -1 한게 오리진보다 작으면 실패
			if (other - 1 < otherOrigin)
			{
				cout << -1 << '\n';
				break;
			}
			other--;
			me++;
			changer++;
		}
		changer = 0;
	}
}