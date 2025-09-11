// https://www.acmicpc.net/problem/5356

#include <iostream>
using namespace std;

int main()
{
	int t, line;
	char start;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> line >> start;
		for (int j = 0; j < line; j++)
		{
			for (int k = 0; k < j + 1; k++)
			{
				cout << start;
			}
			start++;
			if (start > 'Z') start = 65;
			cout << '\n';
		}
		cout << '\n';
	}
}