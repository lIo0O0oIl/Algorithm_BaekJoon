// https://www.acmicpc.net/problem/15923

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, x, xx = 0, y, yy = 0, answer = 0;
	cin >> n >> xx >> yy;
	int ox = xx, oy = yy;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		answer += abs(xx - x) + abs(yy - y);
		xx = x;
		yy = y;
	}
	answer += abs(ox - x) + abs(oy - y);
	cout << answer;
}