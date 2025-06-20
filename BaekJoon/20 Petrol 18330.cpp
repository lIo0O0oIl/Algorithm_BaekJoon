// https://www.acmicpc.net/problem/18330

#include <iostream>
using namespace std;

int main()
{
	int need, now;
	cin >> need >> now;
	now += 60;
	if (need <= now)
	{
		cout << need * 1500;
	}
	else
	{
		cout << (now * 1500) + (need - now) * 3000;
	}
}