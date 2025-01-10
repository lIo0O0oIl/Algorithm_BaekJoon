// https://www.acmicpc.net/problem/30018

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, temp, answer = 0;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp > arr[i])
		{
			answer += temp - arr[i];
		}
	}
	cout << answer;
}