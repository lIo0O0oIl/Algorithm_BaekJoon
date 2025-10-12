// https://www.acmicpc.net/problem/10180

#include<iostream>
using namespace std;

int main()
{
	int t, n, d, count = 0;
	float v, f, c;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> d;
		for (int j = 0; j < n; j++)
		{
			cin >> v >> f >> c;
			float sum = v * (f / c);
			if (sum >= d) count++;
		}
		cout << count << '\n';
		count = 0;
	}
}