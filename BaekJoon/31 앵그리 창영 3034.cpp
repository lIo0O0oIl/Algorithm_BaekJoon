// https://www.acmicpc.net/problem/3034

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, w, h, input;
	cin >> n >> w >> h;
	int big = hypot(w, h);
	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		if (input <= big) cout << "DA\n";
		else cout << "NE\n";
	}
}