// https://www.acmicpc.net/problem/1568

#include <iostream>
using namespace std;

int main()
{
	int n, now = 1, time = 0;
	cin >> n;
	while (true)
	{
		n -= now;
		if (n == 0)
		{
			cout << time + 1;
			return 0;
		}
		else if (n < 0)
		{
			n += now;
			time++;
			now = 1;
		}
		else time++;
	}
}


/*
-14
13
11
8
4
3
1
1


*/