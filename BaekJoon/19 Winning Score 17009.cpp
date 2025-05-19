// https://www.acmicpc.net/problem/17009

#include <iostream>
using namespace std;

int main()
{
	int a, b, three, two, one;
	cin >> three >> two >> one;
	a = (three * 3) + (two * 2) + one;
	cin >> three >> two >> one;
	b = (three * 3) + (two * 2) + one;
	if (a == b) cout << 'T';
	else if (a > b) cout << 'A';
	else cout << 'B';
}