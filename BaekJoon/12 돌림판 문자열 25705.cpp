// https://www.acmicpc.net/problem/25705

#include <iostream>
using namespace std;

int main()
{
	int n, m, nowInput = 0, nowAnswer = 0, end = 0, noPoint = 0;
	string input, answer;
	cin >> n >> input >> m >> answer;
	while (true)
	{
		if (input[nowInput] == answer[nowAnswer])
		{
			nowAnswer++;
			nowInput++;
			noPoint = 0;
		}
		else
		{
			nowInput++;
			noPoint++;
		}

		if (nowInput > input.size() - 1) nowInput = 0;

		end++;

		if (nowAnswer == answer.size())
		{
			cout << end;
			return 0;
		}

		if (noPoint > 110)
		{
			cout << -1;
			return 0;
		}
	}
}