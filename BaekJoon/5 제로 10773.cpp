// https://www.acmicpc.net/problem/10773

#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n, input, answer = 0;
	stack<int> s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == 0) {
			s.pop();
		}
		else {
			s.push(input);
		}
	}
	while (!s.empty())
	{
		answer += s.top();
		s.pop();
	}
	cout << answer;
}