// https://www.acmicpc.net/problem/14541

#include <iostream>
using namespace std;

int main()
{
	int n, speed, hours, currentTime = 0, total = 0;
	while (true)
	{
		cin >> n;
		if (n == -1) break;
		for (int i = 0; i < n; i++)
		{
			cin >> speed >> hours;
			total += (hours - currentTime) * speed;
			currentTime = hours;
		}
		cout << total << " miles\n";
		total = 0;
		currentTime = 0;
	}
}

// 4635번 Speed Limit 문제와 같은 문제임.