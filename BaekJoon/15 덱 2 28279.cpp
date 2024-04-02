// https://www.acmicpc.net/problem/28279

#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, input, input2;
	deque<int> deque;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		switch (input)		// 입력값에 따라서 행동
		{
			case 1:
				cin >> input2;
				deque.push_front(input2);
				break;
			case 2:
				cin >> input2;
				deque.push_back(input2);
				break;
			case 3:
				if (!deque.empty()) { cout << deque.front(); deque.pop_front(); }
				else cout << -1;
				cout << '\n';
				break;
			case 4:
				if (!deque.empty()) { cout << deque.back(); deque.pop_back(); }
				else cout << -1;
				cout << '\n';
				break;
			case 5:
				cout << deque.size() << '\n';
				break;
			case 6:
				if (deque.empty()) cout << 1;
				else cout << 0;
				cout << '\n';
				break;
			case 7:
				if (!deque.empty()) cout << deque.front();
				else cout << -1;
				cout << '\n';
				break;
			case 8:
				if (!deque.empty()) cout << deque.back();
				else cout << -1;
				cout << '\n';
				break;
		}
	}
}