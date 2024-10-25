// https://www.acmicpc.net/problem/2752

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long arr[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + 3);
	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << ' ';
	}
}