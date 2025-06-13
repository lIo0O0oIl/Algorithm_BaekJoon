// https://www.acmicpc.net/problem/2966

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	int a = 1, b = 2, g = 3;
	bool is_c = true;
	int gg = 1;
	int ac = 0, bc = 0, gc = 0;
	int now = 0;
	string problem;
	cin >> n >> problem;
	for (int i = 0; i < problem.size(); i++)
	{
		if (problem[i] == 'A') now = 1;
		else if (problem[i] == 'B') now = 2;
		else if (problem[i] == 'C') now = 3;

		if (a == now) ac++;
		if (b == now) bc++;
		if (g == now) gc++;

		a++;
		if (a == 4) a = 1;
		if ((i + 1) % 2 == 0) b = 2;
		else
		{
			is_c ? b = 1 : b = 3;
			is_c = !is_c;
		}
		gg++;
		if (gg == 3)
		{
			g++;
			gg = 1;
		}
		if (g == 4) g = 1;
	}
	int m = max({ ac, bc, gc });
	cout << m << '\n';
	if (ac == m) cout << "Adrian\n";
	if (bc == m) cout << "Bruno\n";
	if (gc == m) cout << "Goran\n";
}

/*
BAACC
21133
*/