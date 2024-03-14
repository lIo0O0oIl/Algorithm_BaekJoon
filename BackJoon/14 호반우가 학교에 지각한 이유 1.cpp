// https://www.acmicpc.net/problem/30468

#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, n, cnt = 0;
	cin >> a >> b >> c >> d >> n;
	if (a + b + c + d >= n * 4)
	{
		cout << cnt;
	}
	else 
	{
		cout <<  n * 4 - (a + b + c + d);
	}
}