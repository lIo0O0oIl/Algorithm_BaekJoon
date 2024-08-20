// https://www.acmicpc.net/problem/10990

#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int j = 1; j < a - i; j++)
		{
			cout << ' ';
		}
		cout << '*';
		if (i == 0)
		{
			cout << '\n';
			continue;
		}
		for (int j = 1; j < i * 2; j++)
		{
			cout << ' ';
		}
		cout << '*' << '\n';
	}
}