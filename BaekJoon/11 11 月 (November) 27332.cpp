// https://www.acmicpc.net/problem/27332

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a + (b * 7) > 30) cout << 0;
	else cout << 1;
}