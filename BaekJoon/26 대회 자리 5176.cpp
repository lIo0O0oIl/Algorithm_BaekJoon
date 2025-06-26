// https://www.acmicpc.net/problem/5176

#include <iostream>
using namespace std;

int main()
{
	int t, p, m, input, answer = 0;

	bool arr[501] = { false };

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> p >> m;
		for (int j = 0; j < p; j++)
		{
			cin >> input;
			if (arr[input] == true) answer++;
			else arr[input] = true;
		}
		for (int j = 0; j < m + 1; j++)
		{
			arr[j] = false;
		}
		cout << answer << '\n';
		answer = 0;
	}
}