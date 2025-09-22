// https://www.acmicpc.net/problem/13225

#include <iostream>
using namespace std;

int main()
{
	int n, input, answer = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 1; j <= input / 2; j++)
		{
			if (input % j == 0) answer++;
		}
		cout << input << ' ' << answer + 1 << '\n';
		answer = 0;
	}
}