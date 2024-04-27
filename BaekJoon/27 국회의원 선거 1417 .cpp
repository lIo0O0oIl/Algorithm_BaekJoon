// https://www.acmicpc.net/problem/1417

#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, me, input, answer = 0;
	priority_queue<int> queue;
	cin >> n >> me;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> input;
		queue.push(input);
	}
	while (!queue.empty())
	{
		if (me <= queue.top())
		{
			int temp = queue.top() - 1;
			queue.pop();
			queue.push(temp);
			me++;
			answer++;
		}
		else
		{
			queue.pop();
		}
	}
	cout << answer;
}