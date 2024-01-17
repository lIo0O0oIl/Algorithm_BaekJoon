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
		deque.push_back(input);		// 순서대로 놓고
	}

	now = deque.front();
	deque.pop_front();
	cout << nowNum << " ";

	while (!deque.empty()) {		// 비어있을 때까지

		for (int i = 0; i < abs(now) - 1; i++)		// 절대값.
		{
			if (now > 0) {		// 양수면 앞에꺼 빼서 뒤에 넣어줌.
				deque.push_back(deque.front());
				deque.pop_front();
				nowNum++;
			}
			else {		// 음수면 뒤에있는 걸 앞으로 넣어줌.
				deque.push_front(deque.back());
				deque.pop_back();
				nowNum--;
			}
		}

		if (now > 0) {		// 음수냐 양수냐에 따라서 앞에 껄 뺄지 뒤에 것을 뺼지 달라짐.
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
뺀 순서는 3 -3 -1 1 2

3 2 1 -3 -1	3, 1에 위치에 있던 것. 빼고 3 - 1, 2만큼 뒤로 돌림.
2 1 -3 -1
-3 -1 2 1		-3, 4의 위치에 있던 것. 빼고 3 -1. 2만큼 앞으로 돌림
-1 2 1
2 1 -1	     전에 음수였으므로 -1, 5에 위치. 뒤에 빼고 0만큼 앞으로 돌림.
2 1
2 1	전에 음수였으므로 1, 3에 위치. 빼고 0만큼 앞뒤로 돌림.
2
2 	빼줌.
*/