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
			// ���� other���� Ŀ������
			if (me > other)
			{
				cout << changer << '\n';
				break;
			}

			// -1 �Ѱ� ���������� ������ ����
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