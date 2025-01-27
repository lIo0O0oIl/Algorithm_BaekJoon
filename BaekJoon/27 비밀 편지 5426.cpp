// https://www.acmicpc.net/problem/5426

#include <iostream>
using namespace std;

int main()
{
	int n, sqr;
	string input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 1; j < 101; j++)
		{
			if (input.size() % (j * j) == 0)
			{
				sqr = j;
			}
		}

		for (int j = sqr; j > 0; j--)
		{
			for (int k = j; k <= sqr * sqr; k += sqr)
			{
				cout << input[k - 1];
			}
		}
		cout << '\n';
	}
}