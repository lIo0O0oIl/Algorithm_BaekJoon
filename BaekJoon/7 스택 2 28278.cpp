#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, input, input2;
	stack<int> s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input == 1) {		// 만약 1이면 스택에 넣을꺼 추가해줌.
			cin >> input2;
		}

		switch (input)
		{
		case 1:		// 1이면 넣기
			s.push(input2);
			break;
		case 2:			// 스택위에꺼 출력 후 뺴기. 없으면 -1
			if (!s.empty()) {
				cout << s.top();
				s.pop();
			}
			else {
				cout << -1;
			}
			break;
		case 3:			// 스택에 사이즈 출력
			cout << s.size();
			break;
		case 4:			// 스택이 비어있냐 아니냐
			if (s.empty()) {
				cout << 1;
			}
			else {
				cout << 0;
			}
			break;
		case 5:		// 가장위 출력. 없으면 -1
			if (!s.empty()) {
				cout << s.top();
			}
			else {
				cout << -1;
			}
			break;
		}

		if (input != 1) {
			cout << '\n';
		}
	}
}