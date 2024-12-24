// https://www.acmicpc.net/problem/18870

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int n;
	long long input;
	vector<long long> basic, index;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		basic.push_back(input);
		index.push_back(input);
	}

	sort(index.begin(), index.end());
	index.erase(unique(index.begin(), index.end()), index.end());		// unique는 정렬된 상태서만 작동.

	for (int i = 0; i < n; i++)
	{
		cout << lower_bound(index.begin(), index.end(), basic[i]) - index.begin() << ' ';
	}
}