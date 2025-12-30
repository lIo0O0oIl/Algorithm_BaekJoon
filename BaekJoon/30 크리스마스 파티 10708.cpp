//https://www.acmicpc.net/problem/10708

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, input, fail = 0;
	cin >> n >> m;
	vector<int> target(m);
	vector<int> score(n);
	for (int i = 0; i < m; i++)
	{
		cin >> target[i];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> input;
			if (input == target[i]) score[j]++;
			else fail++;
		}
		score[target[i] - 1] += fail;
		fail = 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << score[i] << '\n';
	}
}