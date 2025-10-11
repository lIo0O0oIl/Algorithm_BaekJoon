// https://www.acmicpc.net/problem/34553

#include <iostream>
using namespace std;

int main()
{
	string input;
	char current = ' ';
	int answer = 0, score = 1;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (current != ' ')
		{
			if (input[i] > current)
			{
				score++;
			}
			else
			{
				score = 1;
			}
		}

		current = input[i];
		answer += score;
	}
	cout << answer;
}