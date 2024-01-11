// https://www.acmicpc.net/problem/4949

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string input;
	stack<char> s;

	while (getline(cin, input))			// 입력 계속해서 받기
	{
		if (input == ".") break;		// 점 들어오면 그만.

		for (int i = 0; i < input.size(); i++)		// 스택에 넣고 뺴고 하는거
		{
			if (input[i] == '(' || input[i] == '[') s.push(input[i]);
			else if (!s.empty())
			{
				if ((input[i] == ')' && s.top() == '(') || (input[i] == ']' && s.top() == '[')) s.pop();
				else if (input[i] == ']' || input[i] == ')') s.push(input[i]);
			}
			else if (input[i] == ']' || input[i] == ')') s.push(input[i]);
		}

		if (s.empty()) cout << "yes\n";
		else cout << "no\n";			// 결과출력

		while (!s.empty())		// 스택 초기화
		{
			s.pop();
		}
	}
}