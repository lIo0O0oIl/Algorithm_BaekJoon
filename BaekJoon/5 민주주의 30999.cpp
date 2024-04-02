// https://www.acmicpc.net/problem/30999

#include <iostream>
using namespace std;

int main() {
	int n, m, cnt = 0, answer = 0;
	string input;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 0; j < m; j++)
		{
			if (input[j] == 'O') cnt++;
		}
		if (cnt > (m / 2)) answer++;
		cnt = 0;
	}
	cout << answer;
}