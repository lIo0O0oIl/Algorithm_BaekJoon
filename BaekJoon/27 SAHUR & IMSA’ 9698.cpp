// https://www.acmicpc.net/problem/9698

#include <iostream>
using namespace std; 

int main()
{
	int t, h, m;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> h >> m;
		if (m - 45 < 0)
		{
			m = 60 + m - 45;
			if (h == 0) h = 23;
			else h -= 1;
		}
		else m -= 45;
		cout << "Case #" << i + 1 << ": " << h << " " << m << "\n";
	}
}