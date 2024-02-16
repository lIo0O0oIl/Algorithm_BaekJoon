// https://www.acmicpc.net/problem/2745

#include <iostream>
using namespace std;

int main() {
	string input;
	int b, nowLocation = 1;			// nowLocation �� ���� �ڸ���, ������ 1�� �ڸ�����, ������ŭ ������.
	long long answer = 0;
	cin >> input >> b;

	for (int i = input.size() - 1; i >= 0; --i)		// �ڿ����� for �� ����
	{
		if (isdigit(input[i]) == 0)		// ���ڿ� �̸�
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

// ���ĺ��� A = 65 ��. 64 ���� ����ϸ� �� ��.