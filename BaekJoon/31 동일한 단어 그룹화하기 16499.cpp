// https://www.acmicpc.net/problem/16499

#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main()
{
	int n;
	unordered_set<string> group;
	string input, temp = "";
	char arr[11];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 0; j < input.size(); j++)
		{
			arr[j] = input[j];
		}
		sort(arr, arr + input.size());
		for (int j = 0; j < input.size(); j++)
		{
			temp += arr[j];
		}
		group.insert(temp);
		temp = "";
	}
	cout << group.size();
}