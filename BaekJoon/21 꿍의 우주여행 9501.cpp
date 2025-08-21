// https://www.acmicpc.net/problem/9501

#include <iostream>
using namespace std;

int main()
{
	int t, n, d, answer = 0;
	float v, f, c;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> d;
		for (int j = 0; j < n; j++)
		{
			cin >> v >> f >> c;
			int temp = f / c * v;
			if (temp >= d) answer++;
		}
		cout << answer << '\n';
		answer = 0;
	}
}