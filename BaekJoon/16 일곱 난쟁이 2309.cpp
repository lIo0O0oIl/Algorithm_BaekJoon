// https://www.acmicpc.net/problem/2309

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int all = 0, noIndex1, noIndex2;
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
				arr[i] = 0;
				arr[j] = 0;
				sort(arr, arr + 9);
				for (int k = 0; k < 9; k++)
				{
					if (arr[k] != 0) cout << arr[k] << '\n';
				}
				return 0;
			}
		}
	}
}