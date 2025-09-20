// https://www.acmicpc.net/problem/14914

#include <iostream>
using namespace std;

int main()
{
	int apple, banana, now = 1;
	cin >> apple >> banana;
	while (true)
	{
		if (apple % now == 0 && banana % now == 0)
		{
			cout << now << ' ' << apple / now << ' ' << banana / now << '\n';
		}

		now++;

		if (now > apple || now > banana)
		{
			break;
		}
	}
}