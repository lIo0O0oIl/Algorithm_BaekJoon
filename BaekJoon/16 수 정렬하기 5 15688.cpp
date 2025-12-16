// https://www.acmicpc.net/problem/15688

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n; i++)
	{
		cout << vec[i] << '\n';
	}
}