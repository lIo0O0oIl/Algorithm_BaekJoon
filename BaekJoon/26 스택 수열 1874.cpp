// https://www.acmicpc.net/problem/1874

#include <iostream>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int n, nowIndex = 0;
	stack<int> s;		// ���ÿ� ����ִ� ��
	queue<char> q;		// ������� push, pop �迭
	vector<int> nums, answers;		// ����, ���� ���� ���� ����

	cin >> n;
	for (int i = 0; i < n; i++)		// ���� �Է¹ޱ�.
	{
		int temp;
		cin >> temp;
		nums.push_back(temp);
	}

	for (int i = 1; i <= n; i++)		// 1���� n������ ��~
	{
		q.push('+');		// �ϴ� �־�
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

	if (answers.size() != nums.size())		// ����� �ٸ��� Ʋ��
	{
		cout << "NO";
		return 0;
	}

	for (int i = 0; i < n; i++)		// �ϳ��� �ٸ��� ������ Ʋ��
	{
		if (nums[i] != answers[i])
		{
			cout << "NO";
			return 0;
		}
	}
	
	while (!q.empty())		// �ϳ��� ���
	{
		cout << q.front() << '\n';
		q.pop();
	}
}

