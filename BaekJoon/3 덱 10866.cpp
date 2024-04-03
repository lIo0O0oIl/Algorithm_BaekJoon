// https://www.acmicpc.net/problem/10866

#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n, input2;
	string input;
	deque<int> deque;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == "push_front")
		{
			cin >> input2;
			deque.push_front(input2);
		}
		else if (input == "push_back")
		{
			cin >> input2;
			deque.push_back(input2);
		}
		else if (input == "pop_front")
		{
			if (deque.empty()) cout << -1;
			else { cout << deque.front(); deque.pop_front(); }
			cout << '\n';
		}
		else if (input == "pop_back")
		{
			if (deque.empty()) cout << -1;
			else { cout << deque.back(); deque.pop_back(); }
			cout << '\n';
		}
		else if (input == "size") cout << deque.size() << '\n';
		else if (input == "empty") cout << (deque.empty() ? 1 : 0) << '\n';
		else if (input == "front")
		{
			if (deque.empty()) cout << -1;
			else { cout << deque.front(); }
			cout << '\n';
		}
		else if (input == "back")
		{
			if (deque.empty()) cout << -1;
			else { cout << deque.back(); }
			cout << '\n';
		}
	}
}