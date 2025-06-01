// https://www.acmicpc.net/problem/20053

#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int t, n, input, min = 1000001, max = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> input;
			if (input < min) min = input;
			if (input > max) max = input;
		}
		cout << min << ' ' << max << '\n';
		min = 1000001;
		max = 0;
	}
}


/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	int t, n, input;
	vector<int> v;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> input;
			v.push_back(input);
		}
		sort(v.begin(), v.end());
		cout << v[0] << ' ' << v[n - 1] << '\n';
		v.clear();
	}
}
*/