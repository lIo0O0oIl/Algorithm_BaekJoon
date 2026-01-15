// https://www.acmicpc.net/problem/3040

#include <iostream>
using namespace std;

int main()
{
	int all = 0;
	int arr[9];
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		all += arr[i];
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (all - (arr[i] + arr[j]) == 100)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k != i && k != j) cout << arr[k] << '\n';
				}
				return 0;
			}
		}
	}
}