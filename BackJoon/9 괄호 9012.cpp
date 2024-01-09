// https://www.acmicpc.net/problem/9012

#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n;
	string input;
	stack<char> s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 0; j < input.size(); j++)
		{
			if (input[j] == ')' && !s.empty() && s.top() != ')') s.pop();
			else s.push(input[j]);
		}
		if (s.empty()) cout << "YES\n";
		else cout << "NO\n";
		while (!s.empty())
		{
			s.pop();
		}
	}
}