// https://www.acmicpc.net/problem/5532

#include <iostream>
using namespace std;

int main() {
	int l, a, b, c, d;
	int language = 0, math = 0, big = 0;			// 최대 날짜, 국어, 수학
	cin >> l >> a >> b >> c >> d;
	while (a > 0)
	{
		a -= c;
		language++;
	}
	big = language;
	while (b > 0)
	{
		b -= d;
		math++;
	}
	if (math > big) big = math;
	cout << l - big;
}