// https://www.acmicpc.net/problem/1864

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	string input;
	int n, answer = 0;
	while (true)
	{
		cin >> input;
		if (input == "#") break;
		for (int i = 0; i < input.size(); i++)
		{
			switch (input[i])
			{
				case '-': n = 0; break;
				case '\\': n = 1; break;
				case '(': n = 2; break;
				case '@': n = 3; break;
				case '?': n = 4; break;
				case '>': n = 5; break;
				case '&': n = 6; break;
				case '%': n = 7; break;
				case '/': n = -1; break;
			}
			answer += n * pow(8, input.size() - i - 1);
		}
		cout << answer << '\n';
		answer = 0;
	}
}