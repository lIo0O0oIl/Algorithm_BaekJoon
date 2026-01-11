// https://www.acmicpc.net/problem/15051

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, small = 0;
	cin >> a >> b >> c;
	small = b * 2 + c * 4;
	if (small > a * 2 + c * 2) small = a * 2 + c * 2;
	if (small > a * 4 + b * 2) small = a * 4 + b * 2;
	cout << small;
}