// https://www.acmicpc.net/problem/11286

#include <iostream>
#include <queue>
using namespace std;

struct cmp 
{
	bool operator()(long long a, long long b)
	{
		if (abs(a) == abs(b)) return a > b;		// 절대값이 같은 경우 가장 작은 원소
		else return abs(a) > abs(b);		// 절대값이 작은 원소
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	long long n, input;
	priority_queue<long long, vector<long long>, cmp> q;
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

/*
18 1 -1 0 0 0 1 1 -1 -1 2 -2 0 0 0 0 0 0 0
*/