// https://www.acmicpc.net/problem/27433

#include <iostream>
using namespace std;

int main()
{
	int n;
	long long a = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		a *= i;
	}
	cout << a;
}