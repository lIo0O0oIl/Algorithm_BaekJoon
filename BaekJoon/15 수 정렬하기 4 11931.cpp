// https://www.acmicpc.net/problem/11931

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int i, int j)
{
	return j < i;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end(), compare);
	for (int i = 0; i < n; i++)
	{
		cout << vec[i] << '\n';
	}
}