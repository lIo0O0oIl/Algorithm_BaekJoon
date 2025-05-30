// https://www.acmicpc.net/problem/1100

#include <iostream>
using namespace std;

int main()
{
	bool is_white = true;
	int answer = 0;
	char input;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> input;
			if (is_white)
			{
				if (input == 'F')
				{
					answer++;
				}
			}
			is_white = !is_white;
		}
		is_white = !is_white;
	}
	cout << answer;
}