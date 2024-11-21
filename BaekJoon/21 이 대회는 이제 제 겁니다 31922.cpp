// https://www.acmicpc.net/problem/31922

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + c > b) cout << a + c;
	else cout << b;
}