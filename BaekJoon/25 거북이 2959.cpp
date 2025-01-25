// https://www.acmicpc.net/problem/2959

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> arr(4);
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	cout << arr[0] * arr[2];
}