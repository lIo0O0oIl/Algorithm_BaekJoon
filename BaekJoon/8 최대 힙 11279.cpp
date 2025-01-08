// https://www.acmicpc.net/problem/11279

#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	long long n, input;
	priority_queue<long long, vector<long long>> q;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input != 0) q.push(input);
		else
		{
			if (q.empty()) cout << 0 << '\n';
			else
			{
				cout << q.top() << '\n';
				q.pop();
			}
		}
	}
}