// https://www.acmicpc.net/problem/12840

#include <iostream>
using namespace std;

int main()
{
	int h, m, s, q, t, input;
	cin >> h >> m >> s >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> t;
		if (t == 1)
		{
			cin >> input;

			if (input % 60 + s >= 60)
			{
				s = (input % 60 + s) % 60;
				m++;
			}
			else s = (input % 60 + s);
			input /= 60;

			if (input % 60 + m >= 60)
			{
				m = (input % 60 + m) % 60;
				h++;
			}
			else m = (input % 60 + m);
			input /= 60;

			h += input;
		}
		else if (t == 2)
		{
			cin >> input;

		}
		else if (t == 3) cout << h << ' ' << m << ' ' << s << '\n';
	}
}