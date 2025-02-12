// https://www.acmicpc.net/problem/23811

#include <iostream>
using namespace std;

int n;

void OneStroke()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 5; j++)
		{
			cout << '@';
		}
		cout << '\n';
	}
}

void Line()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << '@';
		}
		cout << '\n';
	}
}

int main()
{
	cin >> n;
	
	OneStroke();
	Line();
	OneStroke();
	Line();
	OneStroke();
}