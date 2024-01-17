// https://www.acmicpc.net/problem/2346

#include <iostream>
#include <deque>
using namespace std;

int main() {
	int n, input, now, nowNum = 1;
	deque<int> deque;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		deque.push_back(input);		// ������� ����
	}

	now = deque.front();
	deque.pop_front();
	cout << nowNum << " ";

	while (!deque.empty()) {		// ������� ������

		for (int i = 0; i < abs(now) - 1; i++)		// ���밪.
		{
			if (now > 0) {		// ����� �տ��� ���� �ڿ� �־���.
				deque.push_back(deque.front());
				deque.pop_front();
				nowNum++;
			}
			else {		// ������ �ڿ��ִ� �� ������ �־���.
				deque.push_front(deque.back());
				deque.pop_back();
				nowNum--;
			}
		}

		if (now > 0) {		// ������ ����Ŀ� ���� �տ� �� ���� �ڿ� ���� �E�� �޶���.
			now = deque.front();
			deque.pop_front();
			nowNum++;
			if (nowNum > n) nowNum -= n;
			cout << nowNum << " ";
		}
		else {
			now = deque.back();
			deque.pop_back();
			nowNum--;
			if (nowNum < 0) nowNum = abs(0 - nowNum);
			cout << nowNum << " ";
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
*/