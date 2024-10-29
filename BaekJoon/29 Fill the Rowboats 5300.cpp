// https://www.acmicpc.net/problem/5300

#include <iostream>
using namespace std;

int main()
{
	long long n, now = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		now++;
		cout << i << ' ';
		if (now == 6 || i == n)
		{
			cout << "Go! ";
			now = 0;
		}
	}
}