// https://www.acmicpc.net/problem/24511

#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n, input;
	cin >> n;
	vector<int> type(n);
	deque<int> queuestack;

	for (int i = 0; i < n; i++)		// 타입 입력
	{
		cin >> type[i];
	}
	for (int i = 0; i < n; i++)		// 수 입력
	{
		cin >> input;
		if (type[i] == 0)
		{
			queuestack.push_back(input);
		}
	}
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (!queuestack.empty())
		{
			cout << queuestack.back() << ' ';
			queuestack.pop_back();
			queuestack.push_front(input);
		}
		else
		{
			cout << input << ' ';
		}
	}
}

/*

vector<int> queuestack;
	vector<int> type;
	int n, input;

	cin >> n;
	for (int i = 0; i < n; i++)			// 타입 입력 받기
	{
		cin >> input;
		type.push_back(input);
	}

	for (int i = 0; i < n; i++)			// 수열 입력받기
	{
		cin >> input;
		queuestack.push_back(input);
	}

	cin >> n;
	int now = 0;
	for (int i = 0; i < n; i++)		// 삽입할 원소
	{
		cin >> input;
		now = input;
		for (int j = 0; j < type.size(); j++)
		{
			if (type[j] == 0)		// 큐
			{
				int temp = queuestack[j];
				queuestack[j] = now;
				now = temp;
			}
		}
		cout << now << ' ';
	}

*/