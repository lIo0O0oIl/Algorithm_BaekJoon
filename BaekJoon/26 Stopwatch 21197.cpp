// https://www.acmicpc.net/problem/21197


#include <iostream>
using namespace	std;

int main()
{
	int n, time, startTime = 0, answer = 0;
	bool running = false;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> time;
		if (i % 2 == 1)
		{
			startTime = time;
			running = true;
		}
		else
		{
			answer += time - startTime;
			running = false;
		}
	}
	if (running) cout << "still running";
	else cout << answer;
}