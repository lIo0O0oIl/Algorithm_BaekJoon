// https://www.acmicpc.net/problem/2947

#include <iostream>
using namespace std;

int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 5 - 1; i++)
	{
		for (int j = 0; j < 5 - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

				for (int j = 0; j < 5; j++)
				{
					cout << arr[j] << ' ';
				}
				cout << '\n';
			}
		}
	}
}