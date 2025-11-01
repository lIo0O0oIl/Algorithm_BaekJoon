// https://www.acmicpc.net/problem/4493

#include <iostream>
using namespace std;

int main()
{
	int t, n, p1Count = 0, p2Count = 0;
	char p1, p2;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> p1 >> p2;
			if (p1 == 'R' && p2 == 'S') p1Count++;
			else if (p1 == 'S' && p2 == 'P') p1Count++;
			else if (p1 == 'P' && p2 == 'R') p1Count++;
			else if (p2 == 'R' && p1 == 'S') p2Count++;
			else if (p2 == 'S' && p1 == 'P') p2Count++;
			else if (p2 == 'P' && p1 == 'R') p2Count++;
		}
		if (p1Count == p2Count) cout << "TIE\n";
		else if (p1Count > p2Count) cout << "Player 1\n";
		else cout << "Player 2\n";
		p1Count = 0;
		p2Count = 0;
	}
}