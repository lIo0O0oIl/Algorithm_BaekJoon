// https://www.acmicpc.net/problem/32684

#include <iostream>
using namespace std;

int main()
{
	float cocjr0208 = 0, ekwoo = 1.5f;
	int c, p, m, so, s, j;
	cin >> c >> p >> m >> so >> s >> j;
	cocjr0208 = c * 13 + p * 7 + m * 5 + so * 3 + s * 3 + j * 2;
	cin >> c >> p >> m >> so >> s >> j;
	ekwoo += c * 13 + p * 7 + m * 5 + so * 3 + s * 3 + j * 2;
	cout << (cocjr0208 > ekwoo ? "cocjr0208" : "ekwoo");
}