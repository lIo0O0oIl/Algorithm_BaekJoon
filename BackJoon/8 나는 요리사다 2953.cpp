// https://www.acmicpc.net/problem/2953

#include <iostream>
using namespace std;

int main() {
	int input, now, big = 0, score = 0;
	for (int i = 1; i <= 5; i++)
	{
		now = 0;
		for (int j = 1; j <= 4; j++)
		{
			cin >> input;
			now += input;
		}
		if (now > score) {		// 점수가 더 높으면
			big = i;		// 지금 몇 번째 사람인지
			score = now;		// 스코어도 변경해주기
		}
	}
	cout << big << " " << score;
}