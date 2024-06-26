// https://www.acmicpc.net/problem/2587

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[6], total = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		total += arr[i];
	}
	sort(arr, arr + 5);
	cout << total / 5 << '\n' << arr[2];
}