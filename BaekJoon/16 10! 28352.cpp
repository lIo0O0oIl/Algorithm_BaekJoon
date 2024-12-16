// https://www.acmicpc.net/problem/28352

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long week = 6;
	for (int i = 11; i <= n; i++)
	{
		week *= i;
	}
	cout << week;
}