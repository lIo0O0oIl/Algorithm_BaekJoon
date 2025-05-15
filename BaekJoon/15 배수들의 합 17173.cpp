// https://www.acmicpc.net/problem/17173

#include <iostream>
#include <set>
using namespace std;

int main()
{
	int n, m, input, answer = 0;
	set<int> s;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> input;
		for (int j = input; j <= n; j += input)
		{
			s.insert(j);
		}
	}
	for (auto i : s)
	{
		answer += i;
	}
	cout << answer;
}