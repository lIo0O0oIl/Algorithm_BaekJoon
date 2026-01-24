// https://www.acmicpc.net/problem/26933

#include <iostream>
using namespace std;

int main()
{
	int n, h, b, k, price = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> h >> b >> k;
		if (b - h > 0)
		{
			price += (b - h) * k;
		}
	}
	cout << price;
}