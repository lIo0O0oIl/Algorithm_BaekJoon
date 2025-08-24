// https://www.acmicpc.net/problem/10214

#include <iostream>
using namespace std;

int main()
{
	int t, y, yTotal = 0, k, kTotal = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> y >> k;
			yTotal += y;
			kTotal += k;
		}
		if (yTotal > kTotal) cout << "Yonsei\n";
		else if (yTotal < kTotal) cout << "Korea\n";
		else cout << "Draw\n";
		yTotal = 0;
		kTotal = 0;
	}
}