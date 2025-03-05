// https://www.acmicpc.net/problem/14487

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, money = 0;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n - 1; i++)
	{
		money += vec[i];
	}
	cout << money;
}