// https://www.acmicpc.net/problem/1874

#include <iostream>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int n, nowIndex = 0;
	stack<int> s;		// 스택에 담겨있는 수
	queue<char> q;		// 만들어진 push, pop 배열
	vector<int> nums, answers;		// 수열, 내가 만들 정답 수열

	cin >> n;
	for (int i = 0; i < n; i++)		// 수열 입력받기.
	{
		int temp;
		cin >> temp;
		nums.push_back(temp);
	}

	for (int i = 1; i <= n; i++)		// 1부터 n까지의 수~
	{
		q.push('+');		// 일단 넣어
		s.push(i);

		while (s.top() == nums[nowIndex])
		{
			q.push('-');
			answers.push_back(s.top());
			s.pop();
			nowIndex++;
			if (s.empty()) break;
		}
	}

	if (answers.size() != nums.size())		// 사이즈가 다르면 틀려
	{
		cout << "NO";
		return 0;
	}

	for (int i = 0; i < n; i++)		// 하나라도 다른게 있으면 틀려
	{
		if (nums[i] != answers[i])
		{
			cout << "NO";
			return 0;
		}
	}
	
	while (!q.empty())		// 하나씩 출력
	{
		cout << q.front() << '\n';
		q.pop();
	}
}

