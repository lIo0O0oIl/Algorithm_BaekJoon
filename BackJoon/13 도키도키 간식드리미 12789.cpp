// https://www.acmicpc.net/problem/12789

#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n, input, now = 1;
	stack<int> s;		// 한명씩 설 수 있는 공간
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == now) {		// 줄에서 바로 체크
			now++;
		}
		else {
			s.push(input);		// 못 들어가면 일자굴로
		}
		while (!s.empty() && s.top() == now)		// 일자굴 앞이 바로 나갈 수 있는 애인가
		{
			s.pop();
			now++;
		}
	}
	if (s.empty()) {		// 일자굴에 뭐가 있냐 없냐 판단해서 양자택일.
		cout << "Nice";
	}
	else
	{
		cout << "Sad";
	}
}