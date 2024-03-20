// https://www.acmicpc.net/problem/

#include <iostream>
using namespace std;

int main() {
	int t, combo = 0, answer = 0;
	string input;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> input;
		for (int j = 0; j < input.size(); j++)
		{
			if (input[j] == 'O') {
				combo++;
				answer += combo;
			}
			else
			{
				combo = 0;
			}
		}
		cout << answer << '\n';
		answer = combo = 0;
	}
}