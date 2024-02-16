// https://www.acmicpc.net/problem/2745

#include <iostream>
using namespace std;

int main() {
	string input;
	int b, nowLocation = 1;			// nowLocation 은 현재 자리수, 시작은 1의 자리부터, 진법만큼 곱해줌.
	long long answer = 0;
	cin >> input >> b;

	for (int i = input.size() - 1; i >= 0; --i)		// 뒤에부터 for 문 돌기
	{
		if (isdigit(input[i]) == 0)		// 문자열 이면
		{
			answer += ((int)input[i] - 55) * nowLocation;
		}
		else 
		{
			answer += (input[i] - '0') * nowLocation;
		}
		nowLocation *= b;
	}
	cout << answer;
}

// 알파벳은 A = 65 임. 64 빼서 사용하면 될 듯.