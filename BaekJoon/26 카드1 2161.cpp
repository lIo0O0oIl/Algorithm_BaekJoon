// https://www.acmicpc.net/problem/2161

#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n;
	queue<int> q;
	bool move = false;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		q.push(i + 1);
	}
	while (!q.empty())
	{
		if (move)
		{
			int temp = q.front();
			q.pop();
			q.push(temp);
			move = false;
		}
		else
		{
			cout << q.front() << " ";
			q.pop();
			move = true;
		}
	}
}