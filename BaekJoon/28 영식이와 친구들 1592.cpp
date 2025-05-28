// https://www.acmicpc.net/problem/1592

#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n, m, l, now = 1, answer = 0;
	map<int, int> map;
	cin >> n >> m >> l;
	for (int i = 1; i <= n; i++)
	{
		map[i] = 1;
	}
	map[1] = 2;
	while (true)
	{
		if (map[now] == m + 1)
		{
			break;
		}
		if (map[now] % 2 == 1)
		{
			now = (n + now) - l;
			if (now <= 0) now = n - now;
			if (now > n) now -= n;
		}
		else
		{
			now += l;
			if (now > n) now -= n;
		}
		map[now]++;
		answer++;
	}
	cout << answer;
}

/*
5 3 2
1 3 5 2 4 1 4 2 5 3 1
 
10 3 5
1 6 1 6 1
4
*/