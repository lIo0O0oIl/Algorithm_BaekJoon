// https://www.acmicpc.net/problem/10845

#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n, input2;
	string input;
	queue<int> queue;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == "push")
		{
			cin >> input2;
			queue.push(input2);
		}
		else if (input == "pop")
		{
			if (queue.empty()) cout << -1;
			else { cout << queue.front(); queue.pop(); }
			cout << '\n';
		}
		else if (input == "size") cout << queue.size() << '\n';
		else if (input == "empty") cout << (queue.empty() ? 1 : 0) << '\n';
		else if (input == "front")
		{
			if (queue.empty()) cout << -1;
			else { cout << queue.front(); }
			cout << '\n';
		}
		else if (input == "back")
		{
			if (queue.empty()) cout << -1;
			else { cout << queue.back(); }
			cout << '\n';
		}
	}
}