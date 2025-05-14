// https://www.acmicpc.net/problem/16435

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, l, temp;
	vector<int> arr;
	cin >> n >> l;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= l)
		{
			l++;
		}
	}
	cout << l;
}