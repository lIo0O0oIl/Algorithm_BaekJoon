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
		if (now > score) {		// ������ �� ������
			big = i;		// ���� �� ��° �������
			score = now;		// ���ھ �������ֱ�
		}
	}
	cout << big << " " << score;
}