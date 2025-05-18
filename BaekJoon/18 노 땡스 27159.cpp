// https://www.acmicpc.net/problem/27159

#include <iostream>
using namespace std;

int main()
{
	int n, temp, now = 0, answer = 0, small = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (now == 0)
		{
			small = temp;
			now = temp + 1;
		}
		else
		{
			if (temp == now)
			{
				now++;
			}
			else
			{
				answer += small;
				now = temp + 1;
				small = temp;
			}
		}
	}
	if (small != 0) answer += small;
	cout << answer;
}