// https://www.acmicpc.net/problem/2108

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int main()
{
	int n;
	vector<int> vec;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}
	sort(vec.begin(), vec.end());

	double avg = 0;
	for (int i = 0; i < n; i++)
	{
		avg += vec[i];
	}
	cout << round(avg / n) + 0.0f << '\n';		// 0.0f를 더하거나 abs 절댓값을 사용해야함.

	cout << vec[round(n / 2)] << '\n';

	// 최빈값 여러개일땐 최빈값중 두 번째로 작은 값.
	map<int, int> map;
	int count = 0, num = 0;
	for (int i = 0; i < n; i++)
	{
		map[vec[i]]++;
		if (map[vec[i]] > count)
		{
			num = count = map[vec[i]];
		}
	}
	vector<int> vec2;
	for (int i = 0; i < n; i++)
	{
		if (map[vec[i]] == num)
		{
			vec2.push_back(vec[i]);
		}
	}
	sort(vec2.begin(), vec2.end());
	unique(vec2.begin(), vec2.end());
	if (vec2.size() >= 2)
	{
		cout << vec2[1] << '\n';
	}
	else cout << vec2[0] << '\n';

	cout << vec[n - 1] - vec[0];
}