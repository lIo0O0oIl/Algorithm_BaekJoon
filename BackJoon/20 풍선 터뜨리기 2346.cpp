// https://www.acmicpc.net/problem/2346

#include <iostream>
#include <deque>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, input, now, nowNum = 1;
	deque<int> deque;
	set<int> set;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		deque.push_back(input);		// ������� ����
		set.insert(i + 1);
	}

	now = deque.front();
	deque.pop_front();
	cout << nowNum << " ";
	set.erase(1);

	while (!deque.empty()) {		// ������� ������

		for (int i = 0; i < abs(now) - 1; i++)		// ���밪.
		{
			if (now > 0) {		// ����� �տ��� ���� �ڿ� �־���.
				deque.push_back(deque.front());
				deque.pop_front();
				nowNum++;
				while (set.find(nowNum) == set.end())
				{
					nowNum++;
					if (nowNum > n) nowNum -= n;
				}
			}
			else {		// ������ �ڿ��ִ� �� ������ �־���.
				deque.push_front(deque.back());
				deque.pop_back();
				nowNum--;
				while (set.find(nowNum) == set.end())
				{
					nowNum--;
					if (nowNum <= 0) nowNum = n;
				}
			}
		}

		if (now > 0) {		// ������ ����Ŀ� ���� �տ� �� ���� �ڿ� ���� �E�� �޶���.
			now = deque.front();
			deque.pop_front();
			nowNum++;
			while (set.find(nowNum) == set.end())
			{
				nowNum++;
				if (nowNum > n) nowNum -= n;
			}
			cout << nowNum << " ";
			set.erase(nowNum);
		}
		else {
			now = deque.back();
			deque.pop_back();
			nowNum--;
			while (set.find(nowNum) == set.end())
			{
				nowNum--;
				if (nowNum <= 0) nowNum = n;
			}
			cout << nowNum << " ";
			set.erase(nowNum);
		}
	}
}

/*
3 2 1 -3 -1
   2 1 -3 -1
   2 1      -1
   2 1
   2

= 1 4 5 3 2
�� ������ 3 -3 -1 1 2

3 2 1 -3 -1	3, 1�� ��ġ�� �ִ� ��. ���� 3 - 1, 2��ŭ �ڷ� ����.
2 1 -3 -1
-3 -1 2 1		-3, 4�� ��ġ�� �ִ� ��. ���� 3 -1. 2��ŭ ������ ����
-1 2 1
2 1 -1	     ���� ���������Ƿ� -1, 5�� ��ġ. �ڿ� ���� 0��ŭ ������ ����.
2 1
2 1	���� ���������Ƿ� 1, 3�� ��ġ. ���� 0��ŭ �յڷ� ����.
2
2 	����.


3 1 4 2 -2 -1
= 1 4 6 5 2 3
�� ���� 3 2 -1 -2 1 4


1	3���� 3���ϱ�
4	2 ���� 2 ���ϱ�
6	-1 ���� -1 ���ϱ�
5 -2 ���� -3 ���ϱ�
2 1 ���� 1 ���ϱ�
3

�� ��¥ �𸣰ڴ� �̰� ���� ��
*/