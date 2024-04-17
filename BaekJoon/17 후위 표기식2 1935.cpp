// https://www.acmicpc.net/problem/1935

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	int n, numInput;
	double answer;
	string input;
	vector<pair<char, int>> letterVec;		// 알파벳과 그에 맞는 숫자
	stack<double> me;		// mathematical expression (수식)
	
	cin >> n >> input;
	
	// 알파벳에 따른 숫자 입력받기
	for (int i = 0; i < n; i++)
	{
		cin >> numInput;
		letterVec.push_back({ i + 65, numInput });
	}

	// 알파벳일 때와 수식일 때를 구분해서 넣기
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] >= 65)	
		{
			me.push(letterVec[input[i] - 65].second);
		}
		else
		{
			double temp = me.top();
			me.pop();
			switch (input[i])
			{
			case '*':		// *
				answer = me.top() * temp;
				break;
			case '+':		// +
				answer = me.top() + temp;
				break;
			case '-':		// -
				answer = me.top() - temp;
				break;
			case '/':		// /
				answer = me.top() / temp;
				break;
			default:
				cout << "뭐징";
				break;
			}
			me.pop();
			me.push(answer);
		}
	}

	cout << fixed;
	cout.precision(2);
	cout << answer;
}

//for (int i = 0; i < input.size(); i++)
//{
//	if (input[i] < 65 || input[i] > 90)		// 알파벳이 아니라면 (아스키코드)
//	{
//		expression.push(input[i]);
//	}
//}
//while (!expression.empty())
//{
//	cout << expression.top() << " ";
//	expression.pop();
//}