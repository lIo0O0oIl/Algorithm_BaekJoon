// https://www.acmicpc.net/problem/10798

#include <iostream>
using namespace std;

char arr[6][16];

int main() {
	string input;
	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		for (int j = 0; j < input.size(); j++)
		{
			arr[i][j] = input[j];
		}
	}
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[j][i] == 0) continue;		// �����̿���, 0�̿��� ���ؿ����� ����ϴ� �� ����.
			cout << arr[j][i];
		}
	}
}