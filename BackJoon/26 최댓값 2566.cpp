// https://www.acmicpc.net/problem/2566

#include <iostream>
using namespace std;

int main() {
	int cnt = 0, row, col, input;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> input;
			if (input >= cnt) {
				cnt = input;
				row = i + 1;
				col = j + 1;
			}
		}
	}
	cout << cnt << endl << row << " " << col;
}