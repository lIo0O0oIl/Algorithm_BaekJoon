// https://www.acmicpc.net/problem/11728

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int aSize, bSize;
	long long input;
	cin >> aSize >> bSize;
	vector<long long> vec(aSize + bSize);

	for (int i = 0; i < aSize; ++i)
	{
		cin >> input;
		vec[i] = input;
	}
	for (int i = aSize; i < aSize + bSize; ++i)
	{
		cin >> input;
		vec[i] = input;
	}
	sort(vec.begin(), vec.end());

	for (int i = 0; i < aSize + bSize; i++)
	{
		cout << vec[i] << ' ';
	}
}