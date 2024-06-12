// https://www.acmicpc.net/problem/15235

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, input, now = 0, second = 1;
	vector<int> queue;
	vector<int> okVec;
	bool ok = false;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		queue.push_back(input);
		okVec.push_back(0);
	}
	while (!ok)
	{
		if (now >= n) now = 0;

		if (queue[now] == 0)
		{
			now++;
			continue;
		}
		queue[now]--;
		if (queue[now] == 0)
		{
			okVec[now] = second;
		}

		second++;
		now++;

		for (int i : queue)
		{
			if (i != 0)
			{
				ok = false;
				break;
			}
			ok = true;
		}
	}
	for (int i : okVec)
	{
		cout << i << " ";
	}
}