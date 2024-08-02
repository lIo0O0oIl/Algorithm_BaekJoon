// https://www.acmicpc.net/problem/14470

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	int second = 0;
	cin >> a >> b >> c >> d >> e;

	// 데우기
	while (a < 0)
	{
		second += c;
		a++;
	}

	// 해동
	if (a == 0)
	{
		second += d;
	}

	// 데우기
	while (a < b)
	{
		second += e;
		a++;
	}

	cout << second;
}