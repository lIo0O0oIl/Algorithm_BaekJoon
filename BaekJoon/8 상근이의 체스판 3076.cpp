// https://www.acmicpc.net/problem/3076

#include <iostream>
using namespace std;

int main()
{
	int r, c, a, b;
	cin >> r >> c >> a >> b;
	int x = 0;
	bool xNow = true, yNow = true;
	for (int i = 0; i < r * a; i++)
	{
		xNow = yNow;
		for (int j = 0; j < b * c; j++)
		{
			if (xNow) cout << 'X';
			else cout << '.';

			if ((j + 1) % b == 0) xNow = !xNow;
		}
		cout << '\n';
		x++;
		if (x == a)
		{
			x = 0;
			yNow = !yNow;
		}
	}
}

/*
0 1 2
1 2 00

3 4 00

0 1 2


*/