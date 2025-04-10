// https://www.acmicpc.net/problem/12756

#include <iostream>
using namespace std;

int main()
{
	int aa, ah, ba, bh;
	cin >> aa >> ah >> ba >> bh;
	while (1)
	{
		ah -= ba;
		bh -= aa;
		if (ah <= 0 && bh <= 0)
		{
			cout << "DRAW";
			return 0;
		}
		else if (ah <= 0)
		{
			cout << "PLAYER B";
			return 0;
		}
		else if (bh <= 0)
		{
			cout << "PLAYER A";
			return 0;
		}
	}
}