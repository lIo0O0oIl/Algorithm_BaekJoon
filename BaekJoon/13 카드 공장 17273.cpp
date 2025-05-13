// https://www.acmicpc.net/problem/17273

#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main()
{
	vector<tuple<int, int, bool>> v;
	int n, m, a, b, input, answer = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		v.push_back({ a, b, true });
	}
	for (int i = 0; i < m; i++)
	{
		cin >> input;
		for (auto& card : v)
		{
			int temp = get<2>(card) ? get<0>(card) : get<1>(card);
			if (temp <= input)
			{
				get<2>(card) = !get<2>(card);
			}
		}
	}
	for (auto card : v)
	{
		int temp = get<2>(card) ? get<0>(card) : get<1>(card);
		answer += temp;
	}
	cout << answer;
}

/*
5 3

4 6
9 1
8 8
4 2
3 7

8
2
9

*/