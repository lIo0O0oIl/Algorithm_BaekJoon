// https://www.acmicpc.net/problem/10162

#include <iostream>
using namespace std;

int main()
{
	int t, a, b, c;
	cin >> t;
	a = t / 300;
	t %= 300;
	b = t / 60;
	t %= 60;
	c = t / 10;
	t %= 10;
	if (t != 0)
	{
		cout << -1;
		return 0;
	}
	cout << a << " " << b << " " << c;
}

/*
A = 5분 = 300초
B = 1분 = 60초
C = 10초
*/