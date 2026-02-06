// https://www.acmicpc.net/problem/5800

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int k, n, gap = 0;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> n;
		vector<int> v(n);
		for (int j = 0; j < n; j++)
		{
			cin >> v[j];
		}
		sort(v.begin(), v.end());
		for (int j = 1; j < n; j++)
		{
			if (v[j] - v[j - 1] > gap) gap = v[j] - v[j - 1];
		}
		cout << "Class " << i + 1 << "\nMax " << v[n - 1] << ", Min " << v[0]
			<< ", Largest gap " << gap << '\n';
		gap = 0;
	}
}