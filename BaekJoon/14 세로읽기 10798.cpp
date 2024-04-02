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
			if (arr[j][i] == 0) continue;		// 공백이여도, 0이여도 백준에서는 출력하는 것 같음.
			cout << arr[j][i];
		}
	}
}