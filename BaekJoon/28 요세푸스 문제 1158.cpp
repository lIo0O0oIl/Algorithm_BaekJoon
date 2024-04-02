// https://www.acmicpc.net/problem/1158

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	queue<int> q;
	vector<int> v;
	int n, k, input, now = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	while (!q.empty())
	{
		now++;
		if (now % k == 0) {		// 딱 k로 나누어 떨어지면
			now = 0;
			v.push_back(q.front());
			q.pop();
		}
		else {
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
	}
	cout << "<";
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
		if (i == v.size() - 1) {		// 화살표 해줄겨고~
			cout << ">";
		}
		else {
			cout << ", ";
		}
	}
}