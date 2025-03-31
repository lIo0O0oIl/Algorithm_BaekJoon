// https://www.acmicpc.net/problem/9325

#include <iostream>
using namespace std;

int main()
{
	int t, s, n, count, price, car = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> s >> n;
		car += s;
		for (int j = 0; j < n; j++)
		{
			cin >> count >> price;
			car += count * price;
		}
		cout << car << '\n';
		car = 0;
	}
}