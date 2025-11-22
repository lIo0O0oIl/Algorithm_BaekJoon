// https://www.acmicpc.net/problem/30032

#include <iostream>
using namespace std;

int main()
{
	int n, d;
	string input;
	cin >> n >> d;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 0; j < input.size(); j++)
		{
			if (d == 1)
			{
				if (input[j] == 'd') input[j] = 'q';
				else if (input[j] == 'b') input[j] = 'p';
				else if (input[j] == 'q') input[j] = 'd';
				else if (input[j] == 'p') input[j] = 'b';
			}
			else if (d == 2)
			{
				if (input[j] == 'd') input[j] = 'b';
				else if (input[j] == 'b') input[j] = 'd';
				else if (input[j] == 'q') input[j] = 'p';
				else if (input[j] == 'p') input[j] = 'q';
			}
		}
		cout << input << '\n';
	}
}