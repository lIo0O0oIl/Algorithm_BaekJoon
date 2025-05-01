// https://www.acmicpc.net/problem/32141

#include <iostream>
using namespace std;

int main()
{
	int n, h, input, now = 0, card = -1;
	bool killOk = false;
	cin >> n >> h;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		now += input;
		if (now >= h && !killOk)
		{
			card = i + 1;
			killOk = true;
		}
	}
	cout << card;
}