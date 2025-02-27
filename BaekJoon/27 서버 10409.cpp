// https://www.acmicpc.net/problem/10409

#include <iostream>
using namespace std;

int main()
{
	int n, t, input, now = 0, answer = 0;
	bool is_ok = false;
	cin >> n >> t;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (now + input <= t && !is_ok)
		{
			now += input;
			answer++;
		}
		else
		{
			is_ok = true;
		}
	}
	cout << answer;
}