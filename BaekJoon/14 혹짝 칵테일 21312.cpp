// https://www.acmicpc.net/problem/21312

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, answer = 1, odd = 0;
	cin >> a >> b >> c;
	if (a % 2 == 1) { answer *= a; odd++; }
	if (b % 2 == 1) { answer *= b; odd++; }
	if (c % 2 == 1) { answer *= c; odd++; }
	if (odd == 0) answer = a * b * c;
	cout << answer;
}