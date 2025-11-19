// https://www.acmicpc.net/problem/14782

#include <iostream>
using namespace std;

int main()
{
	int n, all = 0;
	cin >> n;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0) all += i;
	}
	cout << all + n;
}