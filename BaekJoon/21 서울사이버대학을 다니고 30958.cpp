// https://www.acmicpc.net/problem/30958

#include <iostream>
#include <string>
using namespace std;

int arr[26] = {0};

int main()
{
	int n, big = 0;
	string input;
	cin >> n;
	cin.clear();
	getline(cin, input);
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] >= 'a' && input[i] <= 'z')
		{
			arr[input[i] - 97]++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] > big)
		{
			big = arr[i];
		}
	}
	cout << big;
}